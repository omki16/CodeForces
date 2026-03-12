#include<iostream>
using namespace std;

int main()
{
    int no_of_cases;
    cin >> no_of_cases;

    for (int i = 0; i < no_of_cases; i++)
    {
        long long tires;
        cin >> tires;

        // Buses have either 4 or 6 tires
        // Check if it's possible at all
        bool possible = false;
        long long min_buses = -1, max_buses = -1;

        // Try all combinations: x buses with 6 tires, rest with 4 tires
        // 6x + 4y = tires  =>  y = (tires - 6x) / 4, must be >= 0 and integer
        // max buses: minimize 6-tire buses (x=0, x=1, ...)
        // min buses: maximize 6-tire buses

        long long lo = -1, hi = -1;
        for (long long x = 0; x * 6 <= tires; x++)
        {
            long long rem = tires - x * 6;
            if (rem % 4 == 0)
            {
                long long y = rem / 4;
                long long total = x + y;
                if (!possible)
                {
                    lo = total;
                    hi = total;
                    possible = true;
                }
                else
                {
                    lo = min(lo, total);
                    hi = max(hi, total);
                }
            }
        }

        if (!possible)
            cout << -1 << "\n";
        else
            cout << lo << " " << hi << "\n";
    }
    return 0;
}
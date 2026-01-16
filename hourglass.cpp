#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        long long s, k, m;
        cin >> s >> k >> m;

        long long ans;

        if (m < k)
        {
            // No flips after initial flip at t=0
            ans = max(0LL, s - m);
        }
        else
        {
            // After first flip at t=k, sand amount becomes min(s, k)
            long long last_flip = (m / k) * k;
            long long current_sand = min(s, k);
            long long time_since_flip = m - last_flip;
            ans = max(0LL, current_sand - time_since_flip);
        }

        cout << ans << endl;
    }
    return 0;
}

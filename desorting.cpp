#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long no_of_cases;
    cin >> no_of_cases;

    while (no_of_cases--)
    {
        long long length_of_array;
        cin >> length_of_array;

        long long arr[length_of_array];
        for (long long i = 0; i < length_of_array; i++)
        {
            cin >> arr[i];
        }

        long long mini = LLONG_MAX;

        for (long long i = 1; i < length_of_array; i++)
        {
            mini = min(mini, arr[i] - arr[i - 1]);
        }

        if (mini < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (mini / 2 + 1) << endl;
        }
    }

    return 0;
}
fo
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int no_of_cases;
    cin >> no_of_cases;

    for (int i = 0; i < no_of_cases; i++)
    {
        int len;
        cin >> len;

        int arr[len];

        for (int j = 0; j < len; j++)
        {
            cin >> arr[j];
        }

        int max_last = arr[len-1] - arr[0];
        int max_start = 0;
        int max_end = 0;
        int max_adj = 0;

        for (int i = 0; i < len; i++)
        {
            max_start = max(max_start, arr[i] - arr[0]);
            max_end = max(max_end, arr[len-1] - arr[i]);
        }

        for (int i = 0; i < len - 1; i++)
        {
            max_adj = max(max_adj, abs(arr[i+1] - arr[i]));
        }

        int result = max(max_last, max(max(max_end, max_start), max_adj));

        cout << result << endl;
    }

    return 0;
}
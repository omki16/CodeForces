#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int count1 = 0;
        int element1 = a[0];
        int element2 = -1;
        int count2 = 0;
        bool ok = true;  

        for (int i = 0; i < n; i++)
        {
            if (element1 == a[i])
            {
                count1++;
            }
            else if (element2 == a[i] || element2 == -1)
            {
                element2 = a[i];
                count2++;
            }
            else
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << "NO" << endl;
            continue; 
        }

        int ans = count1 - count2;
        if (ans == 1 || ans == -1 || ans == 0 || ans == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}


#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int arrlen , queries;
        cin >> arrlen >> queries;

        long long arrsum = 0;
        int arr[arrlen];

        for (int i = 0; i < arrlen; i++)
        {
            cin >> arr[i];
            arrsum += arr[i];
        }

        for (int j = 0; j < queries; j++)
        {
            int tempsum = 0;
            int l, r, k;
            cin >> l >> r >> k;
            int notoadd = r - l + 1;
            tempsum += (notoadd * k);
            for (int i = 0; i < arrlen; i++)
            {
                if (i < l - 1 || i > r - 1)
                {
                    tempsum += arr[i];
                }
            }
            if (tempsum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        
    }
    
    return 0;
}

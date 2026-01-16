#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int size_of_array;
        cin >> size_of_array;

        int arr[size_of_array];
        int b[size_of_array];
        int c[size_of_array];

        for (int j = 0; j < size_of_array; j++)
        {
            cin >> arr[j];
        }

        int maxi = INT_MIN;
        int c_count = 0;
        int b_count = 0;

        for (int k = 0; k < size_of_array; k++)
        {
            maxi = max(maxi,arr[k]);
        }

        for (int p = 0; p < size_of_array; p++)
        {
            if (arr[p] == maxi)
            {
                c[c_count] = arr[p];
                c_count++;
            }
            else
            {
                b[b_count] = arr[p];
                b_count++;
            }
        }

        if (b_count == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int m = 0; m < b_count; m++)
            {
                cout << b[m] << " ";
            }
            cout << endl;
            for (int n = 0; n < c_count; n++)
            {
                cout << c[n] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}

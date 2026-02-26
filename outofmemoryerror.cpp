#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int n, m, h;
        cin >> n >> m >> h;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int copy_arr[n];
        for (int j = 0; j < n; j++)
        {
            copy_arr[j] = arr[j];
        }
        for (int i = 0; i < m; i++)
        {
            int bi,ci;
            cin >> bi >> ci;
            if (arr[bi-1] + ci <= h)
            {
                arr[bi-1] += ci;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    arr[i] = copy_arr[i];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
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
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == 1)
            {
                arr[i] += 1;
            }
            
        }
        
        for (int i = 0; i < len -1; i++)
        {
            if (arr[i+1] % arr[i] == 0)
            {
                arr[i+1] = arr[i+1] + 1;
            }
        }

        for (int i = 0; i < len ; i++)
        {
            cout << arr[i] << " ";
        }
        
    }
    
    return 0;
}

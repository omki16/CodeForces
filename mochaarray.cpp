#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int length;
        cin >> length;
        int arr[length];
        for (int j = 0; j < length; j++){
            cin >> arr[j];
        }
        int flag = 0;
        for (int i = 0; i < length; i++)
        {
            for (int j = i+1; j < length; j++)
            {
                int curr_gcd = __gcd(arr[i], arr[j]);
                if (curr_gcd <= 2)
                {
                    flag = 1;
                    break;
                }
    
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
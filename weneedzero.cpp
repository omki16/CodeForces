#include<iostream>
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
        int xorarr = 0;
        for (int j = 0; j < length; j++){
            cin >> arr[j];
            xorarr = xorarr ^ arr[j];
        }
        if (length % 2 == 1)
        {
            cout << xorarr << endl;
        }
        else
        {
            if (xorarr == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        
    }
    return 0;
}

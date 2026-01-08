#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_inputs;
    cin >> no_of_inputs;
    for (int i = 0; i < no_of_inputs; i++)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int flag =1;
        for (int i = 1; i < size-1; i++)
        {
            if (arr[i-1]> arr[i+1])
            {
                flag = 0;
                break;
            } 
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}

    
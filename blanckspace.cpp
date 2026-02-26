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
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        int max_black_space = 0;
        for (int j = 0; j < length; j++)
        {
            if (arr[j] == 0)
            {
                int black_space = 0;
                for (int k = j; k < length; k++)
                {
                    if (arr[k] == 0)
                    {
                        black_space++;
                    }
                    else
                    {
                        break;
                    }
                }
                max_black_space = max(max_black_space, black_space);
            }
        }
        cout << max_black_space << endl;
    }
}
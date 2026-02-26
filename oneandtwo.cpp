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
        int count_2 = 0;
        for (int j = 0; j < length; j++){
            cin >> arr[j];
            if (arr[j] == 2)
            {
                count_2++;
            }
        }
        if (count_2 % 2 == 1)
        {
            cout << -1 << endl;
        }
        else if (count_2 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int tocount = count_2 / 2;
            int temp_count = 0;
            for (int j = 0; j < length; j++){
                if (arr[j] == 2)
                {
                    temp_count++;
                    if (temp_count == tocount)
                    {
                        cout << j + 1 << endl;
                        break;
                    }
                }
            }
        }
    }
    
    return 0;
}

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int length_of_array;
        cin >> length_of_array;
        int arr[length_of_array];
        int sum = 0;
        for (int i = 0; i < length_of_array; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}

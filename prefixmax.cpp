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
        for (int j = 0; j < length_of_array; j++)
        {
            cin >> arr[j];
        }
        int max_index = 0;
        for (int j = 1; j < length_of_array; j++)
        {
            if (arr[j] >= arr[max_index])
            {
                max_index = j;
            }
        }
        swap(arr[0], arr[max_index]);
        cout << arr[0] * length_of_array << endl;
    }
    
    return 0;
}

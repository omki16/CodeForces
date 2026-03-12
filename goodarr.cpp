#include<iostream>
using namespace std;

bool compare(int a, int b)
{

    if ((a%2 == 0 && b%2 == 0) || (a%2 != 0 && b%2 != 0))
    {
        return true;
    }
    
    return false;
}

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
        int count = 0;
        for (int i = 0; i < length -1; i++)
        {
            if (compare(arr[i],arr[i+1]))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
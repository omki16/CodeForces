#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int number;
        cin >> number;
        int count = 0;
        if (number < 11)
        {
            cout << number << endl;
        }
        else if (number < 101)
        {
            count += 9;
            count += number / 10;
            cout << count << endl;
        }
        else if (number < 1001)
        {
            count += 9;
            count += 9;
            count += number / 100;
            cout << count << endl;
        }
        else if (number < 10001)
        {
            count += 9;
            count += 9;
            count += 9;
            count += number / 1000;
            cout << count << endl;
        }
        else if (number < 100001)
        {
            count += 9;
            count += 9;
            count += 9;
            count += 9;
            count += number / 10000;
            cout << count << endl;
        }
        else if (number < 1000001)
        {
            count += 9;
            count += 9;
            count += 9;
            count += 9;
            count += 9;
            count += number / 100000;
            cout << count << endl;
        }
        
    }
    
    return 0;
}

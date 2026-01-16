#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int n;
        cin >> n;

        if (n == 2)
        {
            cout << 2 << endl;
        }
        else if (n == 3)
        {
            cout << 3 << endl;
        }
        else
        {
            int remainder = n % 6;
            if (remainder == 0 || remainder == 3 || remainder == 4)
            {
                cout << 0 << endl;
            }
            else if (remainder == 1 || remainder == 5)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}

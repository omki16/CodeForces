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

        for (int j = 0; j < n; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl; 
    }

    return 0;
}


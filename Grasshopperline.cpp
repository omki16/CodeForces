#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int x,k;
        cin >> x >> k;
        if (x % k == 0)
        {
            cout << 2 << endl;
            cout << x-1 << " " << 1 << endl;    
        }
        else{
            cout << 1 << endl;
            cout << x  << endl;
        }
    }
    return 0;
}

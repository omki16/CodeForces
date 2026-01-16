#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if (a>b)
        {
            cout << "First" << endl;
        }
        else if (b>a)
        {
            cout<< "Second" << endl;
        }
        else{
            if (c%2 == 0)
            {
                cout << "Second" << endl;
            }
            else{
                cout <<  "First" << endl;
            }
        }
    }
    
    return 0;
}

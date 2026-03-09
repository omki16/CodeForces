#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (d  < b)
        {
            cout << -1 << endl;
        }
        else
        {
            int diffy = d - b;
            int steps = diffy;
            if (d == b)
            {
                if (c <= a)
                {
                    cout << a -c << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
            else
            {
                a += diffy;
                if (c <= a)
                {
                    cout << steps + (a - c) << endl;
                }
                else
                {
                    cout << -1 << endl;
                }
            }
        }
        
    }

    return 0;
}

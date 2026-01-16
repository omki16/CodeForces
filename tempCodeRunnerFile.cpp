#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int s,k,m;
        cin >> s >> k >> m;
        if (s < k)
        {
            cout << 0 << endl;
        }
        else{
            if ((m/k)%2 == 0)
            {
                cout << m%k << endl;
            }
            else{
                cout << k - (m % k) << endl;
            }
        }
        
    }
    
    return 0;
}
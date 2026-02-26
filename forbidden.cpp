#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;

    for (int i = 0; i < no_of_cases; i++)
    {
        int n,k,x;
        cin >> n >> k >> x;
        if(x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            for (int j = 0; j < n; j++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            if(k == 1){
                cout << "NO" << endl;
            }
            else{
                if(n % 2 == 0){
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for (int j = 0; j < n/2; j++)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else{
                    if(k >= 3){
                        cout << "YES" << endl;
                        cout << n/2 << endl;
                        for (int j = 0; j < (n/2) - 1; j++)
                        {
                            cout << 2 << " ";
                        }
                        cout << 3 << endl;
                    }
                    else{
                        cout << "NO" << endl;
                    }
                }
            }
        }
        
    }
    
    return 0;
}

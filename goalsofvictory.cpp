#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cases;
    cin >> cases;
    cout << endl;
    for (int i = 0; i < cases; i++)
    {
        int no_of_teames;
        cin >> no_of_teames;
        cout << endl;
        int sum =0;
        for (int i = 0; i < no_of_teames -1 ; i++)
        {
            int eff;
            cin >> eff;
            sum += eff;
        }
        cout << sum * -1;
    }
    
    return 0;
}

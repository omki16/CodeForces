#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_inputs;
    cin >> no_of_inputs;
    for (int i = 0; i < no_of_inputs; i++)
    {
        int number;
        cin >> number;
        if (number % 3 == 0 )
        {
            cout<< "Second" <<endl;
        }
        else cout << "First" << endl;
        
    }
    return 0;
}

    


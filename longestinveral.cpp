#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases; 
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        long long number;
        cin >> number;
        int div = 1;
        while (number % div == 0)
        {
            div++;
        }
        cout << div-1 << endl;
        
    }
    
    return 0;
}

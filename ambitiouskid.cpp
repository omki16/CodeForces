#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_integers;
    cin >> no_of_integers;
    cout << endl;
    int arr[no_of_integers];

    for (int i = 0; i < no_of_integers; i++)
    {
        cin >> arr[i];
    }

    int mini = INT_MAX;

    for (int i = 0; i < no_of_integers; i++)
    {

        if (arr[i] == 0)
        {
            mini = 0;
            break;
        }
        else if (arr[i] > 0)
        {
            mini = min(arr[i],mini);
        }
        else
        {
            mini = min(((-1)*arr[i]),mini);
        }
    }
    cout << mini << endl;

    return 0;
}

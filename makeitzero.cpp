#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int len;
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }
        if (len % 2 == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << len << endl;
            cout << 1 << " " << len << endl;
        }
        else{
            cout << 4 << endl;
            cout << 1 << " " << len-1 << endl;
            cout << 1 << " " << len-1 << endl;
            cout << len-1 << " " << len << endl;
            cout << len-1 << " " << len << endl;
        }
    }
    return 0;
}

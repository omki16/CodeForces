#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int a,b,len;
        cin >> a >> b >> len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }
        
        int count = b;
        for (int i = 0; i < len; i++)
        {
            count += min(arr[i],a);
        }

        cout << count << endl;
        
    }
    
    return 0;
}

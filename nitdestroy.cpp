#include<iostream>
#include<algorithm>
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
        for (int j = 0; j < len; j++) cin >> arr[j];

        int count = 0;
        int lastindex = -1;
        
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] == 0)
            {
                if ( j - lastindex > 1)
                {
                    count++;
                }
                
                lastindex = j;
            }
        }
        if (len - lastindex > 1)
        {
            count++;
        }
        cout << count << endl;
    }
    
    return 0;
}

#include<iostream>
#include<vector>
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
        vector<int> arr(len);
        for (int j = 0; j < len; j++)
        {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());
        bool ans = true;
        for (int i = 1; i+1 < len; i+=2)
        {
            if (arr[i] != arr[i+1]) 
            {
                ans = false;
            }
        }
        if (ans)
        {
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

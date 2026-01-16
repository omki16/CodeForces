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
        int length_of_blist;
        cin >> length_of_blist;
        int arr[length_of_blist];
        for (int i = 0; i < length_of_blist; i++)
        {
            cin >> arr[i];
        }
        
        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i = 1; i < length_of_blist; i++)
        {
            if (arr[i-1] <= arr[i])
            {
                ans.push_back(arr[i]);
            }
            else{
                ans.push_back(arr[i]);
                ans.push_back(arr[i]);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

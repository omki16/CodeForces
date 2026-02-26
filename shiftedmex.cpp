#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int find_mex(vector<int>& a) {
    unordered_set<int> s(a.begin(), a.end());
    int mex = 0;
    while (s.count(mex)) mex++;
    return mex;
}


int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int length_of_array;
        cin >> length_of_array;
        vector<int> arr(length_of_array);
        for (int j = 0; j < length_of_array; j++)
        {
            cin >> arr[j];
        }
        int mini= INT_MAX;
        for (int j = 0; j < length_of_array; j++)
        {
            if (arr[j] >= 0)
            {
                mini = min(mini, arr[j]);
            }
        }
        int x = mini * (-1);
        for (int i = 0; i < length_of_array; i++)
        {
            arr[i] += x;
        }
        int mex ;
        mex = find_mex(arr);
        cout << mex << endl;
    }
    
    return 0;
}

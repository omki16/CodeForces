#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int no_of_cases;
    cin >> no_of_cases;

    for (int i = 0; i < no_of_cases; i++)
    {
        int length;
        int k;
        cin >> length >> k;

        string s;
        cin >> s;

        map<char,int> char_count;
        int odd_count = 0;

        for (char c : s){
            if (char_count[c] == 1)
            {
                odd_count--;
                char_count[c] = 0;
            }
            else
            {
                odd_count++;
                char_count[c] = 1;
            }
        }

        if (odd_count <= k + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
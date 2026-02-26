#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int length;
        cin >> length;
        string s;
        cin >> s;
        int last = length -1;
        int start = 0;
        while (last > start)
        {
            if ((s[last] == '0' && s[start] == '0') || (s[last] == '1' && s[start] == '1') )
            {
                break;
            }
            else{
                start++;
                last--;
            }
            
        }
        cout << last - start + 1 << endl;
    }
    
    return 0;
}

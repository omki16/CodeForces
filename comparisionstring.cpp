#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        int maxsmall = 0;
        int maxgeater = 0;
        int cossmall = 0;
        int cosgeater = 0;
        for (int j = 0; j < len; j++){
            if(s[j] == '<'){
                cossmall++;
                maxgeater = max(maxgeater, cosgeater);
                cosgeater = 0;
            }
            else{
                cosgeater++;
                maxsmall = max(maxsmall, cossmall);
                cossmall = 0;
            }
        }
        maxsmall = max(maxsmall, cossmall);
        maxgeater = max(maxgeater, cosgeater);
        int result = max(maxsmall, maxgeater);
        cout << result + 1 << endl;
    }
    
    return 0;
}

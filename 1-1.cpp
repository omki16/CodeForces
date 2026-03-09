#include<iostream>
using namespace std;


int main() {
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        int len ;
        cin >> len;
        string str;
        cin >> str;
        int one_count = 0;
        for (int j = 0; j < len; j++)
        {
            if(str[j] == '1'){
                one_count++;
            }
        }
        string copys = str;
        int max_one = one_count;
        for (int i = 1; i < len-1; i++)
        {
            if(copys[i] == '0' && copys[i-1] == '1' && copys[i+1] == '1'){
                copys[i] = '1';
                max_one++;
            }
        }
        int min_one = max_one;
        for (int i = 1; i < len-1; i++)
        {
            if(copys[i] == '1' && copys[i-1] == '1' && copys[i+1] == '1'){
                copys[i] = '0';
                min_one--;
            }
        }
        cout << min_one << " " << max_one << endl;
    }
    
}
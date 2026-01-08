#include<bits/stdc++.h>
using namespace std;    

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;

    for (int i = 0; i < no_of_cases; i++)
    {
        int length_of_string;
        cin >> length_of_string;
        char a[length_of_string + 1];
        cin >> a;
        int max_cell_count = 0;
        int current_cell_count = 0;
        int no_of_one = 0;
        for (int i = 0; i < length_of_string; i++)
        {
            if(a[i] == '.'){
                current_cell_count++;
                max_cell_count = max(current_cell_count,max_cell_count);
            }

            if(a[i] == '#'){
                no_of_one += current_cell_count; 
                current_cell_count = 0;
            }
        }
        no_of_one += current_cell_count;
        if (max_cell_count > 2)
                {
                    cout << 2 <<"\n";
                }
        else cout << no_of_one << "\n";
        
    }
    
    return 0;
}

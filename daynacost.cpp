#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int size;
        int mostcommon;
        cin >> size >> mostcommon;

        vector<int> arr(size);  
        for (int j = 0; j < size; j++) {
            cin >> arr[j];
        }

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if(arr[i] == mostcommon){
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
            
        }

        if (flag == 0)
        {
             cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
           
    }

    return 0;
}

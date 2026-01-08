#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int no_of_cases;
    cin >> no_of_cases;

    for (int i = 0; i < no_of_cases; i++) {
        long long length_of_array, max_sub_length;
        cin >> length_of_array >> max_sub_length;

        vector<long long> array(length_of_array);

        for (int j = 0; j < length_of_array; j++) {
            cin >> array[j];
        }

        vector<long long> copy_array = array;
        
        sort(copy_array.begin(), copy_array.end());

        
        if (copy_array == array || max_sub_length >> 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
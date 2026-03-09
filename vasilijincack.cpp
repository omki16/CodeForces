#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int no_of_cases;
    cin >> no_of_cases;
    for (int i = 0; i < no_of_cases; i++)
    {
        long long n, k ,x;
        cin >> n >> k >> x;
        long long minsum = k * (k + 1) / 2;
        long long maxsum = k * (2 * n - k + 1) / 2;
        if (x < minsum || x > maxsum){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}

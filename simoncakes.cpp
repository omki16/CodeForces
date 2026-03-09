#include <iostream>
#include <set>
using namespace std;
 
bool isPrime(long long n) {
    if (n <= 1) return false;
 
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
long long findK(long long number) {
 
    set<long long> uniquePrimes;
 
    for (long long i = 2; i * i <= number; i++) {
 
        if (number % i == 0) {
 
            if (isPrime(i))
                uniquePrimes.insert(i);
 
            while (number % i == 0)
                number /= i;
        }
    }
 
    if (number > 1)
        uniquePrimes.insert(number);
 
    long long product = 1;
    for (auto p : uniquePrimes)
        product *= p;
 
    return product;
}
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
        cout << findK(n) << endl;
    }
}
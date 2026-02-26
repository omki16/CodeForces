#include <iostream>
#include <set>
using namespace std;

bool isPrime(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

long long findK(long long number) {

    set<long long> uniquePrimes;

    for (long long i = 2; i <= number; i++) {
        if (isPrime(i) && number % i == 0) {
            uniquePrimes.insert(i);
            while (number % i == 0)
                number /= i;
        }
    }

    long long product = 1;
    for (auto p : uniquePrimes)
        product *= p;

    return product;
}

int main() {

    int no_of_cases;
    cin >> no_of_cases;

    while (no_of_cases--) {
        long long number;
        cin >> number;

        cout << findK(number) << endl;
    }

    return 0;
}
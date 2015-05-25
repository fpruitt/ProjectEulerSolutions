#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> prime_factors(long n)
{
    vector<int> factors;
    while(n % 2 == 0)
    {
        cout << n << endl;
        factors.push_back(2);
        n = n / 2;
    }

    for(int i = 3; i <= sqrt(n); i = i + 2)
    {
        while(n % i == 0)
        {
            cout << i << endl;
            factors.push_back(i);
            n = n / i;
        }
    }

    if(n > 2)
    {
        cout << n << endl;
        factors.push_back(n);
    }
    return factors;
}

int main() {
    vector<int> primes = prime_factors(600851475143);
    int max_prime = 0;
    for(int prime : primes)
    {
        if(prime > max_prime)
        {
            max_prime = prime;
        }
    }
    cout << "Max prime is: "<< max_prime << endl;
    return 0;
}
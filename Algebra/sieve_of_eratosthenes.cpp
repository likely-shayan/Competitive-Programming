#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes (Till 10^7) in O(NloglogN)
vector<bool> isPrime; // isPrime[i] tells if 'i' is prime or not
vector<int32_t> Primes; // For storing the primes
bool created = false; // To avoid recalculating primes if already built
void sieve() {
    if (created) {
        return;
    }
    const int32_t N = int32_t(1e7);
    isPrime.resize(N, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; ++i) {
        if (!isPrime[i]) {
            continue;
        }
        int m = i;
        while (m*i <= N) {
            isPrime[m*i] = false;
            ++m;
        }
    }

    for (int i = 0; i <= N; ++i) {
        if (isPrime[i]) {
            Primes.push_back(i);
        }
    }
    created = true;
}
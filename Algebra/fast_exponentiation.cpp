#include <iostream>
#include <climits>
using namespace std;

// Returns base^power % mod in O(log(power)) time
int64_t fastExpo(int64_t base, int64_t power, int64_t mod = ULLONG_MAX) {
    base %= mod;
    int64_t result = 1;
    while (power > 0) {
        if (power & 1) {
            result *= base;
        }
        base *= base;
        power >>= 1;
    }
    return result;
}
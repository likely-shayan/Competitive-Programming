#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <array>
#include <map>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;
using ll = long long;
using ld = long double;

#ifdef LOCAL_JUDGE
    #include "Debugging.h"
    #define DEBUG(Object) {Debugging::debug(#Object, Object);}
#else
    #define DEBUG(Object) {}
#endif

void solve() {}

void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void SetIO(const string& input, const string& output) {
    freopen(input.c_str(), "r", stdin);
    freopen(output.c_str(), "w", stdout);
}

int main() {

    FastIO();

#ifdef LOCAL_JUDGE
    clock_t start = clock();
    SetIO("input.txt", "output.txt");
#endif

    int t;
    cin >> t;
    while (t--)
        solve();    

#ifdef LOCAL_JUDGE
    fprintf(stderr, "Runtime: %.10fs\n", (double) (clock() - start) / CLOCKS_PER_SEC);
#endif

    return 0;
}
/*
CODEFORCES EDU Binary Search Step 2 A

PROBLEM STATEMENT
There are n rectangles of the same size: w in width and h in length.
It is required to find a square of the smallest size into which these rectangles can be packed.
Rectangles cannot be rotated.

INPUT
The input contains three integers w, h, n (1 ≤ w,h,n ≤ 10^9).

OUTPUT
Output the minimum length of a side of a square, into which the given rectangles can be packed.
*/
#include <iostream>
using namespace std;
using ll = long long;

ll w, h, n;

bool canPack(ll x) {
	return (x / w)*(x / h) >= n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> w >> h >> n;
	ll low = 0, high = 1;
	while (!canPack(high)) {
		high *= 2;
	}

	ll res = 0;
	while (low <= high) {
		ll mid = low + (high - low) / 2;
		if (canPack(mid)) {
			res = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	cout << res << "\n";

	return 0;
}
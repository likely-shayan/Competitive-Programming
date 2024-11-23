/*
CODEFORCES EDU Binary Search Step 2 C

PROBLEM STATEMENT
This morning the jury decided to add one more, Very Easy Problem to the problemset of the olympiad.
The executive secretary of the Organizing Committee has printed its statement in one copy, and now they need to make n more copies before the start of the olympiad.
They have two copiers at his disposal, one of which copies a sheet in x seconds, and the other in y seconds.
(It is allowed to use one copier or both at the same time. You can copy not only from the original, but also from the copy.)
Help them find out what is the minimum time they need to make n copies of the statement.

INPUT
The program receives three integers n, x, and y (1 ≤ n ≤ 2⋅10^8, 1 ≤ x,y ≤ 10).

OUTPUT
Print one integer, the minimum time in seconds required to get n copies.
*/
#include <iostream>
using namespace std;

int n, x, y;

bool ok(int t) {
	return ((t/x)+(t/y)) >= n-1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> x >> y;
	int result = 0;
	int low = 0, high = 2*1e9;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (ok(mid)) {
			result = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	cout << result+min(x, y) << "\n";

	return 0;
}
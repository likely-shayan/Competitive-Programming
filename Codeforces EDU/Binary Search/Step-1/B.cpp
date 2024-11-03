/*
CODEFORCES EDU Binary Search Step 1 B

PROBLEM STATEMENT
Given an array of n numbers, sorted in non-decreasing order, and k queries.
For each query, print the maximum index of an array element not greater than the given one.

INPUT
The first line of the input contains integers n and k (0 < n,k ≤ 10^5), the length of the array and the number of queries.
The second line contains n elements of the array, sorted in non-decreasing order.
The third line contains k queries. All array elements and queries are integers, each of which does not exceed 2⋅10^9 in absolute value.

OUTPUT
For each of the k queries, print the maximum index of an array element not greater than the given one.
If there are none, print 0.
*/
#include <iostream>
using namespace std;

int n, k, x;
int* A;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> k;
	A = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	while (k--) {
		cin >> x;
		int res = n;
		int low = 0, high = n-1;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (A[mid] > x) {
				res = mid;
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		cout << res << "\n"; 
	}

	return 0;
}
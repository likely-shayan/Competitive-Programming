/*
CODEFORCES EDU Binary Search Step 1 A

PROBLEM STATEMENT
Implement a binary search algorithm.

INPUT
The first line of the input contains integers n and k (1 ≤ n, k ≤ 10^5), the length of the array and the number of queries. The second line contains n elements of the array, sorted in non-decreasing order. The third line contains k queries. All array elements and queries are integers, each of which does not exceed 10^9 in absolute value.

OUTPUT
For each of the k queries print YES in a separate line if this number occurs in the array, and NO otherwise.
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
		bool found = false;
		int low = 0, high = n-1;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (A[mid] == x) {
				found = true;
				break;
			}
			else if (A[mid] < x) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		if (found) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	delete [] A;

	return 0;
}

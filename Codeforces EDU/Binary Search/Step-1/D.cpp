/*
CODEFORCES EDU Binary Search Step 1 D

PROBLEM STATEMENT
You are given an array a of n integers a1,a2,…,an. Your task is to response to the queries like "How many numbers' values are between l and r?".

INPUT
The first line of the input contains n — the length of the array (1≤ n ≤10^5).
The second line contains n integers a1,a2,…,an (−10^9 ≤ ai ≤ 10^9).
The third line contains integer k — the number of queries (1 ≤ k ≤ 10^5).
The following k lines contain a pair of integers l, r — query, described above (−10^9 ≤ l ≤ r ≤ 10^9).

OUTPUT
The output must consist of k integers — responses for the queries.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int n, k, l, r;
int* A;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}
	sort(A, A+n);
	cin >> k;
	while (k--) {
		cin >> l >> r;
		int LB = n, RB = n;
		int low = 0, high = n-1;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (A[mid] > r) {
				RB = mid;
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		low = 0, high = n-1;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			if (A[mid] >= l) {
				LB = mid;
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		cout << RB - LB << " ";
	}

	return 0;
}
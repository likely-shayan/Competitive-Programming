/*
CODEFORCES EDU Two Pointers Step 1 A

PROBLEM STATEMENT
You are given two arrays, sorted in non-decreasing order. Merge them into one sorted array.

INPUT
The first line contains integers n and m, the sizes of the arrays (1 ≤ n, m ≤ 10^5).
The second line contains n integers ai, elements of the first array, the third line contains m integers bi, elements of the second array (−10^9 ≤ ai,bi ≤ 10^9).

OUTPUT
Print n+m integers, the merged array.
*/

#include <iostream>
using namespace std;

int* MergeSortedArray(int* A, int n, int* B, int m) {
	int* C = new int[n+m];
	int i = 0, j = 0;
	int k = 0;
	while (i < n || j < m) {
		if (j == m || (i < n && A[i] < B[j])) {
			C[k++] = A[i++];
		}
		else {
			C[k++] = B[j++];
		}
	}
	return C;
}

int n, m;
int *A, *B;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;
	A = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}
	B = new int[m];
	for (int j = 0; j < m; ++j) {
		cin >> B[j];
	}

	int* C = MergeSortedArray(A, n, B, m);

	for (int k = 0; k < (n + m); ++k) {
		cout << C[k] << " ";
	}

	delete [] A;
	delete [] B;
	delete [] C;

	return 0;
}
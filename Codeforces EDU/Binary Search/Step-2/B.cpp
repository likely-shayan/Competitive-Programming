/*
CODEFORCES EDU Binary Search Step 2 B

PROBLEM STATEMENT
There are n ropes, you need to cut k pieces of the same length from them.
Find the maximum length of pieces you can get.

INPUT
The first line contains two integers n and k (1 ≤ n,k ≤ 10000).
Next n lines contain one number each, the length of the rope Ai (1 ≤ Ai ≤ 10^7).

OUTPUT
Output one real number, maximum length of pieces you can get.
The answer will be considered correct if the relative or absolute error does not exceed 10^−6.
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const double STEP_SIZE = 1/1e7;
int n, k;
int* A;

bool canCut(double length) {
	int pieces = 0;
	for (int i = 0; i < n; ++i) {
		pieces += floor(A[i] / length);
	}
	return pieces >= k;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> k;
	A = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> A[i];
	}
	double low = 0, high = 1e8;
	double _result = low;
	for (int i = 0; i < 100; ++i) {
		double mid = low + (high - low)/2;
		if (canCut(mid)) {
			_result = mid;
			low = mid + STEP_SIZE;
		}
		else {
			high = mid - STEP_SIZE;
		}
	}

	cout << setprecision(8) << _result << "\n";

	return 0;
}
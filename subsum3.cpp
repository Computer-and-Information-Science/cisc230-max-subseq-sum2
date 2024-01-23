#include <iostream>
#include <vector>
using namespace std;

#include "sequence.h"

int maxSubSum3 (const vector<int>& a);
int maxSumRec (const vector<int>&a, int left, int right);

int main () {

    for (auto i: sequence)
        cout << i << " ";
    cout << ": " << maxSubSum3(sequence) << endl;

    return 0;
}

int maxSubSum3 (const vector<int>& a) {
	return maxSumRec(a, 0, a.size() - 1);
}

int maxSumRec (const vector<int>&a, int left, int right) {
	if (left == right)
		return a[left] > 0 ? a[left] : 0;

	int center = (left + right) / 2;
	int maxLeftSum = maxSumRec(a, left, center);
	int maxRightSum = maxSumRec(a, center + 1, right);

	int maxLeftBorderSum = 0, leftBorderSum = 0;
	for (int i = center; i >= left; i--) {
		leftBorderSum += a[i];
		if (leftBorderSum > maxLeftBorderSum)
			maxLeftBorderSum = leftBorderSum;
	}

	int maxRightBorderSum = 0, rightBorderSum = 0;
	for (int i = center + 1; i <= right; i++) {
		rightBorderSum += a[i];
		if (rightBorderSum > maxRightBorderSum)
			maxRightBorderSum = rightBorderSum;
	}

	return max(max(maxLeftSum, maxRightSum),
		maxLeftBorderSum + maxRightBorderSum);
}
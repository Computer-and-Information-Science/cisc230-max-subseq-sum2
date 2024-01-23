#include <iostream>
#include <vector>
using namespace std;

#include "sequence.h"

int maxSubSum1 (const vector<int>& a);

int main () {

    for (auto i: sequence)
        cout << i << " ";
    cout << ": " << maxSubSum1(sequence) << endl;

	return 0;
}

int maxSubSum1 (const vector<int>& a) {
	int maxSum = 0;
	for (int i = 0; i < a.size(); i++)
		for (int j = i; j < a.size(); j++) {
			int thisSum = 0;
			for (int k = i; k <= j; k++)
				thisSum += a[k];

			if (thisSum > maxSum)
				maxSum = thisSum;
		}

	return maxSum;
}
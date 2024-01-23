#include <iostream>
#include <vector>
using namespace std;

#include "sequence.h"

int maxSubSum2 (const vector<int>& a);

int main () {

    for (auto i: sequence)
        cout << i << " ";
    cout << ": " << maxSubSum2(sequence) << endl;

    return 0;
}

int maxSubSum2 (const vector<int>& a) {
	int maxSum = 0;
	for (int i = 0; i < a.size(); i++) {
		int thisSum = 0;
		for (int j = i; j < a.size(); j++) {
			thisSum += a[j];
			if (thisSum > maxSum)
				maxSum = thisSum;
		}
	}

	return maxSum;
}
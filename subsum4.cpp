#include <iostream>
#include <vector>
using namespace std;

#include "sequence.h"

int maxSubSum4 (const vector<int>& a);

int main () {

    for (auto i: sequence)
        cout << i << " ";
    cout << ": " << maxSubSum4(sequence) << endl;

    return 0;
}

int maxSubSum4 (const vector<int>& a) {
	int maxSum = 0, thisSum = 0;
	for (int i = 0; i < a.size(); i++) {
		thisSum += a[i];
		if (thisSum > maxSum)
			maxSum = thisSum;
		else if (thisSum < 0)
			thisSum = 0;
	}
	return maxSum;
}
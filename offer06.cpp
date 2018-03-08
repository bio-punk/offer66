#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size() < 1) { return 0; }

        int min = rotateArray[0];
        int head = 0, tail = rotateArray.size() - 1;
        while (head <= tail) {
        	int mid = (head + tail) / 2;
        	if (1 == tail - head) { min = rotateArray[tail]; break; }
        	if (rotateArray[head] < rotateArray[tail]) { min = rotateArray[head]; break; }
        	
        	if (rotateArray[mid] > rotateArray[tail]) { head = mid; continue; }
        	if (rotateArray[head] > rotateArray[mid]) { tail = mid; continue; }
        	
        	head++;
        	tail--;
        }

        return min;
    }
};

int main(void) {
	vector<int> v;
	for (int i = 5; i < 10; i++) { v.push_back(i); }
	for (int i = 0; i < 100; i++) { v.push_back(9); }
	for (int i = 1; i <= 4; i++) { v.push_back(i); }
	Solution solution;
	cout << solution.minNumberInRotateArray(v) << endl;
	return 0;
}
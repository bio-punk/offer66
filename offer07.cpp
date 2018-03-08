#include <iostream>

using std::cout;
using std::endl;

class Solution {
public:
    int Fibonacci(int n) {
        if (n < 2) { return n; }
        
        n--;
        int a0 = 0, a1 = 1;
        while (n--) {
        	int a2 = a0 + a1;
        	a0 = a1;
        	a1 = a2;
        }
        return a1;
    }
};

int main(void) 
{
	Solution solution;
	cout << solution.Fibonacci(2) << endl;
	return 0;
}
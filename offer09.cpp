class Solution {
public:
    int jumpFloorII(int number) {
  		if (number < 2) { return number; }

  		int a1 = 1, a2 = 1;

  		for (int i = 2; i <= number; i++) {
  			a2 = a1*2;
  			a1 = a2;
  		}

  		return a2;
    }
};
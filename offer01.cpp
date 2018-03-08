class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int x = 0;
        int y = array[0].size() - 1;
        while (x < array.size() && y >= 0) {
            if (target == array[x][y]) { return true; }
            if (target < array[x][y]) { y--; continue; }
            if (target > array[x][y]) { x++; }
        }
        return false;
    }
};
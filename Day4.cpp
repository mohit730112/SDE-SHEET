// Rotate By 90 degree...

// Link : https://leetcode.com/problems/rotate-image/

class Solution
{
public:
    void rotate(vector<vector<int>> &arr)
    {
        int n = arr.size();

        // MEKING TRANSPOSE
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                swap(arr[i][j], arr[j][i]);

        // REVERSING EACH ROW

        for (int i = 0; i < n; i++)
            reverse(arr[i].begin(), arr[i].end());
    }
};
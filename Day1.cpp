/// 1.Set Matrix Zeroes

// Here the only problrm is in space complexity.

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size(), cols = matrix[0].size();
        vector<int> dummy1(rows, -1), dummy2(cols, -1);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    dummy1[i] = 0;
                    dummy2[j] = 0;
                }
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (dummy1[i] == 0 || dummy2[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Efficient Approach

class Solution
{
public:
    void setZeroes(vector<vector<int>> &arr)
    {
        int colm = 1; // This is taken for not affecting the column part of                        every rows
        int rows = arr.size();
        int col = arr[0].size();

        for (int i = 0; i < rows; i++)
        {
            if (arr[i][0] == 0)
                colm = 0;
            for (int j = 1; j < col; j++)
            {
                if (arr[i][j] == 0)
                {
                    arr[i][0] = 0;
                    arr[0][j] = 0;
                }
            }
        }

        for (int i = rows - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 1; j--)
            {
                if (arr[i][0] == 0 || arr[0][j] == 0)
                    arr[i][j] = 0;
            }
            if (colm == 0)
                arr[i][0] = 0;
        }
    }
};

/*







*/

// 2.Pascal's Triangle

class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i].resize(i + 1);
            arr[i][0] = arr[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        return arr;
    }
};
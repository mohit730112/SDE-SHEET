// 1.Sort an array of 0’s 1’s 2’s

// Question Link:-  https://leetcode.com/problems/sort-colors/

class Solution
{
public:
    void sortColors(vector<int> &arr)
    {
        int n = arr.size();
        int i = 0, nz = 0, nt = n - 1;
        while (i <= nt)
        {
            if (arr[i] == 0)
            {
                swap(arr[i], arr[nz]);
                i++;
                nz++;
            }
            else if (arr[i] == 2)
            {
                swap(arr[i], arr[nt]);
                nt--;
            }
            else
            {
                i++;
            }
        }
    }
};

// 2.Best Time to Buy and Sell Stock

// Question Link:-  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int n = arr.size();
        int minElement = INT_MAX;
        int profit = 0;
        for (int i = 0; i < n; i++)
        {
            minElement = min(arr[i], minElement);
            profit = max(arr[i] - minElement, profit);
        }
        return profit;
    }
};
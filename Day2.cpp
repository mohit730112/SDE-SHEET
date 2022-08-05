// 1.NEXT PERMUTATION

// Question Link :- https://leetcode.com/problems/next-permutation/

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int k, l;
        for (k = n - 2; k >= 0; k--)
        {
            if (nums[k] < nums[k + 1])
                break;
        }
        if (k < 0)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (l = n - 1; l > k; l--)
            {
                if (nums[l] > nums[k])
                    break;
            }
            swap(nums[l], nums[k]);
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
};

// 2.KADANE ALGORITHM

// Question Link:-  https://leetcode.com/problems/maximum-subarray/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int csum = 0;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            csum = max(csum + nums[i], nums[i]);
            ans = max(ans, csum);
        }

        return ans;
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0;i <= n-1;i++)
        {
            int sum=0;
            for(int j = i;j <= n-1;j++)
            {
                sum += nums[j];
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }
};
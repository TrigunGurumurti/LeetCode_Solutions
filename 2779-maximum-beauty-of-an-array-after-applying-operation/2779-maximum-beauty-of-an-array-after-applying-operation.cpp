class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int start = 0;
        int result = 0;
        for(int i = 0; i < n; i++)
        {
            while(nums[i] - nums[start] > 2 * k)
                start++;
            result = max(result, i - start + 1);
        }
        return result;
    }
};
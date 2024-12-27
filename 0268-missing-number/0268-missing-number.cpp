class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size();
        while(start < end)
        {
            int mid = (start + end) / 2;
            if(nums[mid] > mid)
                end = mid;
            else 
                start = mid + 1;
        }
        return start;
    }
};
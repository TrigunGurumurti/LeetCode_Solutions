class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++)
    {
        int target = -nums[i];
        int start = i + 1;
        int end = n - 1;
        while(start < end)
        {
            int sum = nums[start] + nums[end];
            if(sum < target)
                start++;
            else if(sum > target)
                end--;
            else
            {
                vector<int> triplet = {nums[i], nums[start], nums[end]};
                result.push_back(triplet);
                while(start < end && nums[start] == triplet[1])
                    start++;
                while(start < end && nums[end] == triplet[2])
                    end--;
            }
        }
        while(i + 1 < n && nums[i + 1] == nums[i]) 
            i++;
    }
    return result;
}
};
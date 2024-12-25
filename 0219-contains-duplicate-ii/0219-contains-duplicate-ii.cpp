class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++)
        {
            if(map[nums[i]] != 0 && i - map[nums[i]] < k)
                return true;
            else
                map[nums[i]] = i + 1;
        }
        return false;
    }
};
class Solution {
public:
    long long findScore(vector<int>& nums) { 
    int n = nums.size();
    long long result = 0;
    set<pair<int, int>> s; 
    for(int i = 0; i < n; i++)
        s.insert({nums[i], i});
    for(auto it: s)
    {
        if(nums[it.second] == 0)
            continue;
        result += it.first;
        nums[it.second] = 0;
        if(it.second - 1 >= 0)
            nums[it.second - 1] = 0;
        if(it.second + 1 < n)
            nums[it.second + 1] = 0;
    }
    return result;
    }
};
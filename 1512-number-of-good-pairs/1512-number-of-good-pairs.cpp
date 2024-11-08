class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int result(0);
        for(int i : nums)
        result += mp[i]++;
        return result;
    }
};
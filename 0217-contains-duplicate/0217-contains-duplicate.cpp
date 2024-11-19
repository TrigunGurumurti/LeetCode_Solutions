class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int it : nums)
        {
            if(map[it] >= 1)
                return true;
            map[it]++;
        }
        return false;
    }
};
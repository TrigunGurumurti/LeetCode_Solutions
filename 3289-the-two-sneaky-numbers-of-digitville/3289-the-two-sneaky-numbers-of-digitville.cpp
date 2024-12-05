class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) 
    {
        vector<int> result, count(nums.size());
        for(auto it:nums)
        {
            count[it]++;
            if(count[it] == 2)
                result.push_back(it);
        }
        return result;
    }
};
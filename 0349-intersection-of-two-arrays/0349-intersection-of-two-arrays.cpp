class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        vector<int> result;
        for(auto a : nums2)
        {
            if (set.count(a))
            {
                result.push_back(a);
                set.erase(a);
            }
        }    
        return result;
    }
};
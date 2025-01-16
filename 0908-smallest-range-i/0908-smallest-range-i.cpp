class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maximum = *max_element(nums.begin(), nums.end());
        int minimum = *min_element(nums.begin(), nums.end());
        eturn max(0, maximum - k - minimum - k);        
    }
};
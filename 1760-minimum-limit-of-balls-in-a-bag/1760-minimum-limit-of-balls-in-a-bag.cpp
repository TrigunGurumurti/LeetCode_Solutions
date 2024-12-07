class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
    int start = 1;
    int end = *max_element(nums.begin(), nums.end());
    
    while(start <= end)
    {
        int operations = 0;
        int mid = start + (end-start) / 2;
        for(auto it : nums)
            operations += (it-1) / mid;
        if(operations > maxOperations)
            start = mid + 1;
        else
            end = mid - 1;
    }        
       return start;
    }
};
class Solution {
private:
    int lowerBound(vector<int> &nums, int n, int target) {
        int left = 0;
        int right = n-1;
        int result = n;

        while(left <= right) {
            int mid = left + (right-left) / 2;
            if(target <= nums[mid]) {
                result = min(result, mid);
                right = mid-1;
            }
            else
                left = mid+1;
        }
        return result;
    }    

    int upperBound(vector<int> &nums, int n, int target) {
        int left = 0;
        int right = n-1;
        int result = n;

        while(left <= right) {
            int mid = left + (right-left) / 2;
            if(target < nums[mid]) {
                result = min(result, mid);
                right = mid-1;
            }
            else
                left = mid+1;
        }
        return result;
    }
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, n, target);
        int ub = upperBound(nums, n, target);

        if(lb == ub)
            return {-1,-1};
        else
            return {lb, ub-1};
    }
};
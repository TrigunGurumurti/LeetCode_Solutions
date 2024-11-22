class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n =  accounts.size();
        int result = 0;
        for(int i = 0; i < n; i++)
        {
            result = max( result, accumulate(accounts[i].begin(), accounts[i].end(), 0) );
        }
        return result;
    }
};
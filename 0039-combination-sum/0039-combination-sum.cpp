class Solution {
public:
    set<vector<int>> s;
    void getAllCombinations(vector<int>& candidates, int index, int target, vector<vector<int>>& result, vector<int>& combination)
    {
        if(index == candidates.size() || target < 0)
            return;
        if(target == 0)
        {
            if(s.find(combination) == s.end())
            {
                result.push_back(combination);
                s.insert(combination);
            }    
            return;
        }    
        combination.push_back(candidates[index]);

        // single choice
        getAllCombinations(candidates, index+1, target - candidates[index], result, combination);

        // multiple choice
        getAllCombinations(candidates, index, target - candidates[index], result, combination);

        combination.pop_back();

        // exclusion
        getAllCombinations(candidates, index+1, target, result, combination);
    } 

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        getAllCombinations(candidates, 0, target, result, combination);
        return result;
    }
};
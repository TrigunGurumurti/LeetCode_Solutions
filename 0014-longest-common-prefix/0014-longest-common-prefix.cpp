class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
		{
			return "";
		}

        sort(strs.begin(), strs.end());

        string first = strs[0]; 
        string last = strs[strs.size() - 1]; 
        
        int minLength = min(first.size(), last.size());
        string ans = "";
        for(int i=0; i<minLength; i++)
		{
            if(first[i] != last[i])
			{
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};
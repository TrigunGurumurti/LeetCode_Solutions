class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        int m = s.size();
        int n = spaces.size();
        string result="";
        int i = 0;
        int j = 0;
        while(i < m)
        {
            if(j < n && i == spaces[j])
            {
                result += " ";
                j++;
            }
            result += s[i];
            i++;
        }
        return result;
    }
};
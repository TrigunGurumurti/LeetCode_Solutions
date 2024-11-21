class Solution {
public:
    string result = " ";
    void longestStr(string &s, int start, int end)
    {
        while(start >= 0 && end < s.size())
        {
            if(s[start] != s[end])
                break;
            start--;
            end++;
        }
        if(result.size() < end - start)
            result = s.substr(start + 1 , end - start - 1);
    }
    string longestPalindrome(string s) {
        for(int i = 0 ; i < s.size() ; i++)
        {
            longestStr(s, i, i);
            longestStr(s, i, i+1);
        }
        return result;
    }
};
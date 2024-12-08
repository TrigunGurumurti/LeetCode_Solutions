class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int maximumLength = 0;
    vector<int> characterIndex(128, -1);
    int start = 0;
    int end = 0;    
    for(end = 0; end < s.length(); end++)
    {
        if(characterIndex[s[end]] >= start)
            start = characterIndex[s[end]] + 1;
        characterIndex[s[end]] = end;
        maximumLength = max(maximumLength, end - start + 1);
    }
    return maximumLength;
    }
};
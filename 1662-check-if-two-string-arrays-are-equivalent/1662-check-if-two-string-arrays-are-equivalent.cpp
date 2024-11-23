class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string left = " ";
        string right = " ";
        for(auto it : word1)
            left += it;
        for(auto it : word2)
            right += it;
        return left == right;
    }
};
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.length();
        int permutDiff = 0;
        for(int i = 0; i < n; i++)
        {
            char str = s[i];
            int j = t.find(s[i]);
            permutDiff += abs(j - i);
        }
        return permutDiff;
    }
};
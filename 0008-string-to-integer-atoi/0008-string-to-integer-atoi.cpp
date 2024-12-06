class Solution {
public:
    int myAtoi(string s) {
        int integer = 0;
        stringstream ss(s);
        ss >> integer;
        return integer;
    }
};
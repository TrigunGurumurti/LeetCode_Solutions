class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> vec;
        int result = 0;
        while(n > 0)
        {
            vec.push_back(n % 10);
            n = n / 10;
        }
        reverse(vec.begin(),vec.end());
        for(int i = 0; i <= vec.size()-1; i++)
        {
            if(i % 2 == 0) 
                result += vec[i];
            else
                result -= vec[i];
        }
        return result;
    }
};
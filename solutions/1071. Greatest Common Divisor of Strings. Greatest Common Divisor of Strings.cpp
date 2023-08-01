//https://leetcode.com/problems/greatest-common-divisor-of-strings/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1+str2 != str2+str1) return "";

        //inbuilt function c++ 14; #include <algorithm>
        int gcdLen = gcd(str1.size(), str2.size());
        return str1.substr(0,gcdLen);
    }
};
//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int len = candies.size();
        vector<bool> ret(len);

        int max = candies[0];
        for(int i =1; i< len;i++){
            if(max< candies[i]){
                max = candies[i];
            }
        }

        for(int i = 0; i<len; i++){
            if(candies[i]+extraCandies >= max) ret[i] = true;
            else ret[i]=false;
            
        }

    return ret;
    }
};
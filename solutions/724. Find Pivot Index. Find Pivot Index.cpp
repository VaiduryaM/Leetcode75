//https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        for(int i:nums){
            rightSum += i;
        }
        //rightsum will have the sum of all the right end = so for ith index, subtract num[i]
        //leftsum will have sum of all the left end = so for ith index, add num[i]
        for(int i = 0; i<nums.size();i++){
            rightSum -= nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};
//https://leetcode.com/problems/single-number/?envType=study-plan-v2&envId=leetcode-75
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        //XOR approach - returns 0 if same bits, else returns the bit
        /*int res = 0;
        for(int i = 0; i< nums.size(); i++){
            res = res ^ nums[i];
            //cout<<"RES::"<<res<<endl;
        }
        return res;*/
        
        //hash set approach
        unordered_set<int> uset;
        for(int n : nums){
            if(uset.find(n) != uset.end()){
                uset.erase(n);
            }
            else
                uset.insert(n);
        }
        
        return *uset.begin();
        
    }
};
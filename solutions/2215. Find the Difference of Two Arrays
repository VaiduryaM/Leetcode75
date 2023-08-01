//https://leetcode.com/problems/find-the-difference-of-two-arrays/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:

    vector<int> uniqueEle (vector<int>& nums1, vector<int>& nums2){
        unordered_set <int> list1, list2;

        for(int i: nums2){
            list2.insert(i);
        }

        for(int i:nums1){
            if(list2.find(i) == list2.end()){
                list1.insert(i);
            }
        }

        //convert set to vector
        return vector<int>(list1.begin(), list1.end());


    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        return {uniqueEle(nums1,nums2), uniqueEle(nums2, nums1)};

    }
};
//https://leetcode.com/problems/unique-number-of-occurrences/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        //get the frequency of elements - maps
        unordered_map<int,int> freq; 
        for(int i : arr){
            freq[i]++;
        }

        //get unique frequency - sets
        unordered_set<int> ufreq;
        for(auto [k,v]:freq){
            ufreq.insert(v);
        }

        return freq.size() == ufreq.size();
        
    }
};
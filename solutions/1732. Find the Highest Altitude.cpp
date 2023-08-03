//https://leetcode.com/problems/find-the-highest-altitude/editorial/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxG = 0;
        int netG = 0;
        for(int i:gain){
            netG += i;
            //cout<<"netG:"<<netG<<"maxG:"<<maxG<<endl;
            maxG = netG > maxG ? netG : maxG;
        }

        return maxG;
        
    }
};
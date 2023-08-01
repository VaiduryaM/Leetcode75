https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ret;
        int i =0, j=0;
        while(i < word1.length() && j < word2.length()){
              ret =ret+word1[i];
            ret = ret+word2[j];

            i++; j++;
        }
        ret += word1.substr(i);
        ret += word2.substr(j);
        /* while(i < word1.length() ){
              ret =ret+word1[i];
           

            i++; 
        }


         while(j < word2.length()){
             
            ret = ret+word2[j];

            j++;
        }*/
       // cout<<"st::"<<ret<<endl;
        
        return ret;
    }
};
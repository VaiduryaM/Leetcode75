//https://leetcode.com/problems/reverse-vowels-of-a-string/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:

    bool isVowel(char c){
        return (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U');
    }
    string reverseVowels(string s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end){
            //parses h and gets e
            while(start < s.size() && !isVowel(s[start])){
                //cout<<s[start]<<endl;
                start++;
            }
            //gets o and parses l
            while(end >= 0 && !isVowel(s[end])){
                //cout<<s[end]<<endl;
                end--;
            }


            if(start<end){
                swap(s[start++],s[end--]);
            }
        }

        return s;



        
    }
};
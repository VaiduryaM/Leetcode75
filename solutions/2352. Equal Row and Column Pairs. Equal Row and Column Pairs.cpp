//https://leetcode.com/problems/equal-row-and-column-pairs/?envType=study-plan-v2&envId=leetcode-75

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        unordered_map<string, int> counter;
        int ret =0;
        //do for rows as given in vectors, easy to parse
        for(vector<int> &r: grid){
            string row;
            for(int i : r){
                row += to_string(i)+",";
            }
            counter[row]++;
        }

        //for columns
        //get elements first
        for(int i=0; i<grid.size();i++){
            vector<int> cols;
            for(int j=0;j<grid.size();j++){
                cols.push_back(grid[j][i]);
            }
            string col;
            for(int k : cols){
                col += to_string(k)+",";
            }   
            //counter[col]++;
            ret += counter[col];
        }

        //why doesnt this work!!!!????
      /*  for(unordered_map<string, int>::iterator it= counter.begin(); it != counter.end(); it++){
            cout<<it->first<<"--"<<it->second<<endl;
            if(it->second > 1) ret++;
        }*/
        return ret;


    }
};
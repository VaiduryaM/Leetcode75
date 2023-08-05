//https://leetcode.com/problems/number-of-recent-calls/submissions/?envType=study-plan-v2&envId=leetcode-75

class RecentCounter {
public:
//vector<int> arr;
queue<int> qu;
    RecentCounter() {
        
    }
   /* int getRange(int t){

        int ret = 0;
        int min = t-3000;
        int max = t;
        //cout<<"min:"<<min<<" max:"<<max<<" t:"<<t<<" :size:"<<arr.size()<<endl;
        for(int i : arr){
            if(i >= min)
            {
                if(t<=max){
                    ret++;
                }
            }
        }
        return ret;

    }*/
    int ping(int t) {        

        /*
        //brute force
        arr.push_back(t);
        int r = getRange(t);

        return r;
        */

        //because every call to ping has increasing value of t
        //using queues
        qu.push(t);

        int range = t - 3000;
        //pop the front cause doesnt come within the range and return the size
        while(qu.front() < range) qu.pop();

        return qu.size();





    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
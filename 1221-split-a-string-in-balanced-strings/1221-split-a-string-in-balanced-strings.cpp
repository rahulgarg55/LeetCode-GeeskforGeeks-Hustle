class Solution {
public:
    int balancedStringSplit(string s) {
         int ans = 0;
        int val = 0;
        for(auto i: s){
            if(i == 'L'){
                val +=1;
            }else{
                val -=1;
            }
            if(val == 0) ans++;
        }
        return ans;
    }
};
class Solution {
public:
    bool isUgly(int n) {
       if(n<=0)return false;
        int arr[3]={2,3,5};
        for(auto i:arr){
            while(n%i==0)n=n/i;
        }
        return n==1?true:false;
    }
};
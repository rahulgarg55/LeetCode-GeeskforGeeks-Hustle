class Solution {
public:
    int pivotInteger(int n) {
           int temp=n*(1+n)/2;
        int s=sqrt(temp);
        if(s*s==temp)
            return s;
        return -1;
    }
};
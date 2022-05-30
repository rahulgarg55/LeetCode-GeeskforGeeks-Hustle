class Solution {
public:
    int divide(int dividend, int divisor) {
   if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
     
        long long ans = 0;
        int s = 1;
        if(dividend<0 && divisor<0)
        s = 1;
        else if(divisor<0 || dividend<0)
        s = -1;
        long long dnd = abs((long)dividend),dsr = abs((long)divisor);
        while(dnd>=dsr)
        {
            long long temp = dsr, m = 1;
            while(temp<<1 <= dnd)
            {
                temp = temp<<1;
                m = m<<1;
                
            }
            dnd -= temp;
            ans += m;
        }
        return ans*s;

    }
};
class Solution {
public:
    int myAtoi(string str) {
    int n=str.size();
        long long i=0;
        while(i<n and str[i]==' ')i++;
        long long sign=1;
        if(i<n and (str[i]=='-'||str[i]=='+')){
            if(str[i]=='-')sign=-1;
            i++;
        }
           long long x=pow(2,31);
           long long num=0;
           while(i<n){
               if((int)(str[i]-'0')<0 || (int)(str[i]-'0')>9)
                   break;
               num=num*10+(long long)(str[i]-'0');
               if(num>=x){
                   if(sign==-1){
                       return -1*x;
                   }
                   return x-1;
                   }
               i++;
           }
               return num*sign;
               
           
        
    }
};
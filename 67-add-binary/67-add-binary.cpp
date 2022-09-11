class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int i=a.length()-1,j=b.length()-1;
        int carry=0;
        while(i>=0 || j>=0){
            int sum=carry;
            if(i>=0)sum+=a[i--]-'0';
            if(j>=0)sum+=b[j--]-'0';
         if(sum>1)carry=1;else carry=0;
            ans+=to_string(sum%2);
      
            }
        if(carry)ans+=to_string(carry);
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};
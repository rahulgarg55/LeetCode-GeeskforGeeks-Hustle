class Solution {
public:
    string reverseWords(string s) {
          
        int n=s.size(),i=0;
        string ans="";
        
        while(i<n)
        {
            while(i<n and s[i]==' ')
                i++;
            if(i>=n) break;
            
            int j=i+1;
            while(j<n and s[j]!=' ') j++;
            
            
                string word=s.substr(i,j-i);
            
            if(ans=="")
                ans=word;
            else
                ans=word+" "+ans;
            i=j+1;
        }
        return ans;
    }
    };
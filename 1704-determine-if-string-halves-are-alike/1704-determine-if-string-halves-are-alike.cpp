class Solution {
public:
    bool halvesAreAlike(string s) {
               int len=s.size();
        int c1=0,c2=0;
        vector<int>ans={'A','E','I','O','U','a','e','i','o','u'};
        for(int i=0;i<len/2;i++)
        {
            for(auto x:ans)
            {
                if(s[i]==x)
                {
                    c1++;
                }
            }
        }
        for(int i=len/2;i<len;i++)
        {
            for(auto x:ans)
            {
                if(s[i]==x)
                {
                    c2++;
                }
            }
        }
        return c1==c2;
    }
};
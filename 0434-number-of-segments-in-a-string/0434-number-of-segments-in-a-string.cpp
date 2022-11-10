class Solution {
public:
    int countSegments(string s) {
        int count=0;
        int n=s.size();
for(int i=0;i<n;i++){
    if((i==0 ||s[i-1]==' ') && s[i]!=' ')
        count++;
              
        }
        return count;
    }
};
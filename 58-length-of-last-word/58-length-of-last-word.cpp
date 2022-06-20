class Solution {
public:
    int lengthOfLastWord(string s) {
         
        int i=s.length()-1;
        int k=-1;       // k stores the last index of last word
        while(s[i]==' ')
            i--;
        k=i;
        while(i>=0 && s[i]!=' ') //iterates again to get first index of last word
            i--;
        return k-i;     //diffrence gives the total length of the last word
    }
};
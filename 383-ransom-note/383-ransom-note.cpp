class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int>count(26);
        for(char c:magazine){
            count[c-'a']+=1;
        }
        for(char c:ransomNote){
            count[c-'a']-=1;
            if(count[c-'a']<0)return false;
        }
        return true;
        // ransom->> aa    count of a is 2, a is 1,count=1
        //magazine-->> ab  a=1,b=1
    }
};
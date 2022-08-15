class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 }
                               };
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(T[s[i]]<T[s[i+1]])
                sum-=T[s[i]];  //IV=4 I-1 V-5
            else
                sum+=T[s[i]];
        }
        return sum;
    }
};
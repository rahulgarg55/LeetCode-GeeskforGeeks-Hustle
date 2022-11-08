class Solution {
public:
    string makeGood(string s) {
         string goodString;
    for(char ch:s)
    {
        if((!goodString.empty()) && abs(goodString.back()-ch)==32)  
            goodString.pop_back();
        else  
            goodString.push_back(ch);
    }
    return goodString;
    }
};
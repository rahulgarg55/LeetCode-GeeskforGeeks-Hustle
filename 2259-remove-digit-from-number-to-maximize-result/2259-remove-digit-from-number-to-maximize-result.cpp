class Solution {
public:
    string removeDigit(string number, char digit) {
   for(int i=0;i<number.length();i++){
       if(number[i]==digit && digit<number[i+1]){
           number.erase(i,1);
           return number;
       }
   }
        int last=number.find_last_of(digit);
        number.erase(last,1);
        return number;
    }
};
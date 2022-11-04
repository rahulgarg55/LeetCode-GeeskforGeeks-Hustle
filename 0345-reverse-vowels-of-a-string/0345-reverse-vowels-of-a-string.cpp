class Solution {
public:
   bool isvowel(char c){
        return(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||
               c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
    }
    string reverseVowels(string s) {
        int front=0;
        int back=s.size()-1;
        while(front<back){
            if(!isvowel(s[front])){
                front++;
                continue;
            }
            if(!isvowel(s[back])){
                back--;
                continue;
            }
            swap(s[front],s[back]);
           front++;
            back--;
            }
        return s;
    }
};
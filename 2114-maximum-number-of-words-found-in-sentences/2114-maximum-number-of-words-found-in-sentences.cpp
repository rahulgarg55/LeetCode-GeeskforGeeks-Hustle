class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxword=0;
        for(string str:sentences){
            int wordcount=0;
            for(int i=0;i<str.size();i++){
                if(str[i]==' ')
                    wordcount++;
            }
        
        maxword=max(wordcount+1,maxword);
        }
        return maxword;
    }
};
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){ //words list
            //each word
            int flag=1;
            map<char,char>m1; 
        map<char,char>m2;
            for(int j=0;j<words[i].size();j++){
    //words[i]="mee" ,pattern=>abb
        auto it=m1.find(pattern[j]); //checking if a is already there in map 
        auto it2=m2.find(words[i][j]); //find 'm'
        if(it==m1.end()){
            m1.insert({pattern[j],words[i][j]}); //'a' is mapped to 'm'
        }
        else{
            if(it->second!=words[i][j]) //trying to map 'a':r, r is diff from m then we will stop bcz a is mapping to two different characters thats why taking flag
            {
                flag=0; //problem report
                break;
            }
        }
             if(it2==m2.end()){
            m2.insert({words[i][j],pattern[j]});  // 'm':'a'
        }
        else{
            if(it2->second!=pattern[j]) //'a':r
            {
                flag=0; //problem report
                break;
            }
        }
            }
        if(flag)ans.push_back(words[i]);
            }
        return ans;
    }
};
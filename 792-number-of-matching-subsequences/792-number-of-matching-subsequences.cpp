class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int total =0,k=s.size();
        unordered_map<string,int>stringmap;
        for(int i=0;i<words.size();i++){
            stringmap[words[i]]++;
        }
        for(auto st: stringmap){
           int index1=0,index2=0;
            string m=st.first;
            int p=m.size();
            while(index1<k&&index2<p){
                if(s[index1]==m[index2]){
                    index1++;
                    index2++;
                }
                else{
                    index1++;
                }
            }
            if(index2==p){
                total+=st.second;
            }
        }
        return total;
    }
};
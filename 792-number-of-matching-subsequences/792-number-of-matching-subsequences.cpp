class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
      int total=0,k=s.size();
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        for(auto st:m){
            int index1=0,index2=0;
            string m=st.first;
            int p=m.size();
            while(index1<k && index2<p){
                if(s[index1]==m[index2]){ //abcde //acd
                    //index1 is at a //index2 is at a of acd
                    index1++;
                    index2++;
                }else{
                    index1++; //index1 is at b of abcde and index 2 is at c of acd
                }
            }
            if(index2==p){
                total+=st.second; //index2 will be equal to size of "acd"
            }
        }
        return total;
    }
};
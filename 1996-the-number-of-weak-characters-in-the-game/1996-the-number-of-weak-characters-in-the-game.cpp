class Solution {
public:
    static bool compare(vector<int>&a,vector<int>&b){
        if(a[0]==b[0])return a[1]>b[1];
        else 
            return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
   int n=properties.size();
        sort(properties.begin(),properties.end(),compare);
        int weak=0;
        int max_def=properties[n-1][1];
        for(int i=n-2;i>=0;i--){
            if(properties[i][1]<max_def)weak++;
            max_def=max(max_def,properties[i][1]);
        }
        return weak;
 
    }
};
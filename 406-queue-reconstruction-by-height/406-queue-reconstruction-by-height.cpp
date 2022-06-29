class Solution {
public:
    static bool compare(vector<int>&a,vector<int>&b){
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]>b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        sort(people.begin(),people.end(),compare);
            vector<vector<int>>res;
        for(int i=0;i<n;i++){
            int idx=people[i][1];
            res.insert(res.begin()+idx,people[i]);
            //inseeting element at desired position
        }
     return res;
        } //7,0 6,1 7,1     //6,1
};
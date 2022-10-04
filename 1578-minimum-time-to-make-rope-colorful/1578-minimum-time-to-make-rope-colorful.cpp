class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
     int mintime=0;
        for(int i=0;i<colors.size();i++){
            if(colors[i]==colors[i+1]){
                if(neededTime[i]<neededTime[i+1]){
                    mintime+=neededTime[i];
                }else{
                    mintime+=neededTime[i+1];
                
                neededTime[i+1]=neededTime[i];
            }
        }
        
        }
        return mintime;
    }
};
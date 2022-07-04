class Solution {
public:
    int candy(vector<int>& ratings) {
       
        int count[ratings.size()];
        count[0] = 1;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i] > ratings[i-1]){
                count[i] = count[i-1] + 1;
            }else{
                count[i] = 1;
            }
        }
        int res = count[ratings.size()-1];

        for(int i=ratings.size()-1; i >0;i--){
            if(ratings[i-1] > ratings[i] && count[i-1] <= count[i]){
                count[i-1] = count[i] + 1;
            }
            res += count[i-1];
        }
        return res;
    }
};
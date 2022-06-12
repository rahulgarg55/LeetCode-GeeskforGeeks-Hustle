class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
            if (arr.size()==0 || arr.size() < 3) return false; 
        
        int i = 0;
        while (i < arr.size() && i + 1 < arr.size() && arr[i] < arr[i+1] ){
            i++;
        }
        
        if (i == 0 || i+1 == arr.size()){
            return false;
        }
        
         //we will use the same i, because i is at the point where it just starts decreasing
        
        while (i < arr.size() && i + 1 < arr.size() && arr[i] > arr[i+1]){
            i++;
        }
        
        if (i + 1 == arr.size()){
            return true;
        }
        return false;
    }
};
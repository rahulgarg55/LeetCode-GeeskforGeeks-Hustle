class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int i, j, mid;  
        i =0;        
        j = nums.size()-1;
        int leftIndex =-1, rightIndex =-1;
while(i <= j){       
    mid =(i + j)/2;
    if(nums[mid]> target){ 
        j = mid -1;
    }else if(nums[mid]< target){
        i = mid +1;
    }
    else{        
        leftIndex = mid;   
        j = mid -1;
    }
}
        i =0; j = nums.size()-1;  
        while(i <= j){
            mid =(i + j)/2;
            if(nums[mid]> target){
                j = mid -1;
            }else if(nums[mid]< target){
                i = mid +1;
            }else{ 
                rightIndex = mid;
                i = mid +1;
            }
        }
        vector<int> ans;
        ans.push_back(leftIndex);  
        ans.push_back(rightIndex);
return ans;
            
            
        }
    
};
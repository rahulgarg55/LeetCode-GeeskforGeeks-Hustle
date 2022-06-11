class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
        if(n==0||n==1)return n;
        int j=0; //to store index of next unique element.
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1])
                nums[j++]=nums[i];
        }
            nums[j++]=nums[n-1]; //whether last element is unique or repeated we haven't stored it previously 
        
        return j;
    }
};
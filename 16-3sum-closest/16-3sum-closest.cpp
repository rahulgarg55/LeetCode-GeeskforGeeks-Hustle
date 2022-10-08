class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int n=nums.size();
             sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;
          for(int i=0;i<n;i++){
   int l=i+1,r=n-1;
        while(l<r){
             int closest=nums[i]+nums[l]+nums[r];
      int newdiff=abs(closest-target);
   if(newdiff<diff){
       ans=closest;
       diff=newdiff;
   }
            if(closest==target)
                return closest;
            else if(closest>target)
                r--;
            else l++;
        }
        }
     return ans;

    }
};
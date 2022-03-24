class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>res;
	    while(i<m && j<n){
	        if(nums1[i]<nums2[j]){ //will compare elemets from both arrays
	            res.push_back(nums1[i++]);
	        }else 
	        {
	            res.push_back(nums2[j++]);
	        }
        }
	    
	        while(i<m){ //will print remaining elements of another array if one loop gets finished.
      res.push_back(nums1[i++]);
	        }
	        while(j<n){
	            res.push_back(nums2[j++]);
	        }
        
       nums1.clear();
        nums1=res;
        res.clear();
    }
};
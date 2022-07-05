class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
   unordered_set<int> S;
        int n=nums.size();
    int ans = 0;
  
    // Hash all the array elements
    for (int i = 0; i < n; i++)
        S.insert(nums[i]);
  
    // check each possible sequence from
    // the start then update optimal length
    for (int i = 0; i < n; i++)
    {
        // if current element is the starting
        // element of a sequence
        if (S.find(nums[i] - 1) == S.end()) //1 9 3 10 4 20 2
        {                              //1 9 3 10 4 20 2
            //1 2 3 
            // Then check for next elements
            // in the sequence
            int j = nums[i];   //1 
            while (S.find(j) != S.end()) //1 2 3 4 //count=4
                j++; // for 9 we have MCS length as 2
  
            // update  optimal length if
            // this length is more
            ans = max(ans, j - nums[i]); //2,4=4
        }
    }
    return ans;
}
    
};
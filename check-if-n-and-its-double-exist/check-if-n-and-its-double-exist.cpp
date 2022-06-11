class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
 int n= arr.size();
     
sort (arr.begin(),arr.end());
for(int i=0;i<n;i++){
int s=0;
int e = n-1;
int mid = s + (e-s)/2;
int target = arr[i]*2;
while(s<=e){

           if (arr[mid]== target && mid!=i)
               return true;
           else if (arr[mid]< target)
               s= mid +1;
           else 
               e = mid -1;
          mid=s+(e-s)/2;
       }
       
       
   }
    return false;

            
                
     
    }
};
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int l=arr.size();
        
        int max=arr[l-1],temp;
        arr[l-1]=-1;
        for(int i=l-2;i>=0;i--){
            temp=arr[i];
            arr[i]=max;
                if(temp>=max){
                    max=temp;
                }
        }
    return arr;
    
    }
};
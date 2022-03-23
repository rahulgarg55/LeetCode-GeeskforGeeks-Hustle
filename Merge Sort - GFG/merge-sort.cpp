// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends


class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
       
   int i=l,j=m+1,temp[100000],k,index=l;
   while((i<=m)&&(j<=r)){
       if(arr[i]<arr[j]){
           temp[index]=arr[i];
           i++;
           }else{
               temp[index]=arr[j];
               j++;
           }
           index++;
       }
       if(i>m){ //copying remaining elements of right array.
           while(j<=r){
               temp[index]=arr[j];
               j++;
               index++;
           }
       }else{  //remaining elements of left array
           while(i<=m){
               temp[index]=arr[i];
               i++;
               index++;
           }
       }
       for(k=l;k<index;k++){ //copying into origninal array.
           arr[k]=temp[k];
       }
   
    }
             
         
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)return;
        //code here
        if(l<r){
            int m=(l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
        
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
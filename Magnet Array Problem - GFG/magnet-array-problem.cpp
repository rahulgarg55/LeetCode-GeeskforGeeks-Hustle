// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
        void nullPoints(int n, double magnets[], double getAnswer[])
    {
        // Your code goes here   
        for(int i=0;i<n-1;i++){           //0 //10
            getAnswer[i]=neutral_point(magnets[i],magnets[i+1],magnets,n);
        }
    }
        double neutral_point(double low,double high,double magnets[],int n){
            while(low<high){
                double mid=(low+high)/2;
                //if mid is meutral point
                //[0,10,20,30]
                //low=0, high=10
                //mid=5
                double totalforce=0;
                for(int i=0;i<n;i++){
                    totalforce+=1/(mid-magnets[i]); //1/5 in right+1/(-5)+1/(-15)+1/(-25)
                }
                if(abs(totalforce)<0.000001)return mid;
                if(totalforce<0) //left is too much, roght is too less,right increase
                //cliser to first magnet,away from other three magnets
                high=mid; //low[0,5] high=mid->5
                else
                low=mid;
            }
            return low;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
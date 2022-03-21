// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long sum=0;
        for(long long i=0;i<n;i++){
            if(date%2==0){
                if(car[i]%2!=0){
                    sum+=fine[i];
                }
            }
            else if(date%2!=0){
                if(car[i]%2==0){
                    sum+=fine[i];
                }
            }
        }
        return sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, date;
        cin >> n >> date;
        int car[n], fine[n];
        
        for (i = 0; i < n; i++){
            cin >> car[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> fine[i];
        }
        Solution obj;
        cout << obj.totalFine(n, date, car, fine) << endl;
    }
    return 0;
}
  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}// } Driver Code Ends


vector<int> Smallestonleft(int arr[], int n)
{
    // Complete the function
  vector<int>v; //to store resultant elements
  set<int>s; // The set stores the elements in sorted order.
//All the elements in a set have unique values.
//The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
//Sets follow the Binary search tree implementation.
//The values in a set are unindexed.
  for(int i=0;i<n;i++){ 
      auto it=s.lower_bound(arr[i]); //lower bound return pointer(address of the value) of the value just immediate greater than the element we passed in that
      if(it==s.begin()){ //means set is empty(for eg for 2 in 1st sample test case)
      v.push_back(-1); //no element present on left side which is strictly smaller than itself
      }else{
          it--; // bcz we need index just next smaller than the element we r processing bcz lowerbound gives greater than just that element so we decremented our pointer in set by 1
          v.push_back(*it); //will keep pushing the values strictly smaller than the processing value.
  }
  s.insert(arr[i]); // for eg,2 goes to set in 1st test case (when search goes to 3,it searches in set and 2 is present in set)
  }
  return v;
} 
   
    
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
 // Create a map to store the frequency counts of elements in a1[]
    map<int, int> freq_map;
    for (int i = 0; i < n; i++) {
        if (freq_map.find(a1[i]) != freq_map.end()) {
            freq_map[a1[i]]++;
        } else {
            freq_map[a1[i]] = 1;
        }
    }
 
    // Loop through each element of a2[] and check if it is present in the map
    for (int i = 0; i < m; i++) {
        if (freq_map.find(a2[i]) == freq_map.end() || freq_map[a2[i]] == 0) {
            return "No";
        } else {
            freq_map[a2[i]]--;
            if (freq_map[a2[i]] == 0) {
                freq_map.erase(a2[i]);
            }
        }
    }
 
    return "Yes";
}
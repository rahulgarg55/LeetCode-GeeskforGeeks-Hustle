class Solution {
public:
    static bool comp(vector<int> v1, vector<int> v2) {
        if(v1[0] != v2[0]) return v1[0] < v2[0];
        else return v1[1] < v2[1];
    }
    void extractHeights(vector<vector<int>>& buildings, vector<vector<int>>& heights) {
        for(auto b: buildings) {
            heights.push_back({b[0], -b[2]});
            heights.push_back({b[1], b[2]});
        }
    }
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> ans;
        vector<vector<int>> heights;
        
        extractHeights(buildings, heights);
        sort(heights.begin(), heights.end(), comp);
        
        multiset<int> pq;
        pq.insert(0);
        int currMax=0;
        for(auto h: heights) {
            if(h[1] < 0) {
                pq.insert(-h[1]); // start index height
            }
            else {
                pq.erase(pq.find(h[1]));
            }
            int pqMax = *pq.rbegin();
            if(pqMax != currMax) {
                ans.push_back({h[0], pqMax});
                currMax = pqMax;
            }
        }
        return ans;
    }
};
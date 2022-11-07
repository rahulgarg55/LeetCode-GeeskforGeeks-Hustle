class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
           map<int, int> m;
        set<int> s;
        for(auto &i: arr) m[i]++;
        for(auto &i: m) s.insert(i.second);
        return s.size() == m.size() ? true : false;
    }
};
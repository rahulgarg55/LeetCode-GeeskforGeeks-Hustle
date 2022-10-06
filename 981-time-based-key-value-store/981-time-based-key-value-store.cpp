class TimeMap {
public:
    map<string,vector<pair<int,string>>>m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int left=0;
        int right=m[key].size();//vector size of the key they are asking
        string ans="";
        while(left<right){
            int mid=left+(right-left)/2;
            if(m[key][mid].first>timestamp)
                right=mid;
            else{
                ans=m[key][mid].second;
                left=mid+1;
        }
    }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
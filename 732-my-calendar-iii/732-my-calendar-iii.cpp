class MyCalendarThree{

public:

MyCalendarThree(){}

int book(int start,int end){

++m[start];

--m[end];

int ans=0;

int curr=0;

for(const auto& kv : m)            

            ans = max(ans, curr += kv.second);

return ans;

}

private:

map<int,int>m;
};

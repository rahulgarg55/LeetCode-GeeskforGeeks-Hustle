class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
for(int i=0;i<operations.size();i++)
{
if(operations[i]=="++X" || operations[i]=="X++" )
ans++;
if(operations[i]=="--X" || operations[i]=="X--" )
ans--;
}
return ans;
}

};
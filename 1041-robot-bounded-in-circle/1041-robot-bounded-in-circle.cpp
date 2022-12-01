class Solution {
public:
    bool isRobotBounded(string instructions) {
        int n=instructions.size();
    int curr_x=0,curr_y=0;
    bool move=0;
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    int ptr=0;
    for(int i=0;i<n;i++){
        if(instructions[i%n]=='G'){
            curr_x +=dx[ptr];
            curr_y+=dy[ptr];
            move=1;
        }
        else if(instructions[i%n]=='L'){
            ptr=(ptr-1+4)%4;
        }
        else{
            ptr=(ptr+1)%4;
        }
    }
    
    return ((curr_x==0 and curr_y==0) or ptr > 0) ? 1 : 0;
    }
};
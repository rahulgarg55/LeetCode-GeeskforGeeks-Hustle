class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
        int colstart=0,rowstart=0,rowend=matrix.size()-1,colend=matrix[0].size()-1;
        int dir=0;
        while(rowstart<=rowend && colstart<=colend){
            switch(dir){
                case 0:{
                    //traverse right
                    for(int col=colstart;col<=colend;col++)
                        ans.push_back(matrix[rowstart][col]);
                    rowstart++;
                    break;
                }
                case 1:
                    {
                        //traverse down
                        for(int row=rowstart;row<=rowend;row++)
                            ans.push_back(matrix[row][colend]);
                    colend--;
                    break;
                    }
                case 2:
                    {
                        //traverse left
                        for(int col=colend;col>=colstart;col--)
                            ans.push_back(matrix[rowend][col]);
                    rowend--;
                    break;
                    }
                case 3:
                    {
                        //traverse up
                        for(int row=rowend;row>=rowstart;row--)
                            ans.push_back(matrix[row][colstart]);
                    colstart++;
                    break;
                    }
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};
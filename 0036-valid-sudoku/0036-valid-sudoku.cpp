class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            int forRow[9][9]={0},forCol[9][9]={0},forBox[9][9]={0};
        for(int i=0;i<9;i<i++){
            for(int j=0;j<9;j++){
                
                if(board[i][j]!='.'){
                    int number=board[i][j]-'0'-1;
                    int k=(i/3)*3+j/3;
                    if(forRow[i][number] || forCol[j][number] || forBox[k][number])return false;
                    forRow[i][number]=forCol[j][number]=forBox[k][number]=1;
                }
                
            }
        }
        return true;
    }
};
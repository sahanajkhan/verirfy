class Solution {
public:
    bool issafe(vector<vector<char>>& board,int row, int col , char num){

          for(int i =0; i<9; i++){
            if(board[row][i] == num) return false;
          }

          for(int j =0; j<9; j++){
            if(board[j][col] == num) return false;
          }


          int strow = (row/3)*3;
          int stcol = (col /3)*3;

          for(int i =strow; i<strow+3; i++){
            for(int j =stcol; j<stcol+3; j++){
                if(board[i][j] == num) return false;
            }

          }

          return true;

       
    }

    bool backtrack(vector<vector<char>>& board){

        for(int row =0; row<9; row++){
            for(int col =0; col<9; col++){
                if(board[row][col] =='.'){
                    for(int num ='1'; num<='9'; num++){
                        if(issafe(board, row,col,num)){
                            board[row][col] = num;

                            if(backtrack(board)) return true;
                            board[row][col] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        backtrack(board);
    }
};
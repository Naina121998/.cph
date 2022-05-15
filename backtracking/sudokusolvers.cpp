#include <iostream>
using namespace std;
#define N 9
 bool isValid(int board[N][N], int row, int col, int c){
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == c) 
                return false; 
            
            if(board[row][i] == c) 
                return false; 
            
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) 
                return false; 
        }
        return true;
    }
bool SolveSudoku(int board[N][N]){
        for(int i = 0; i < N; i++){
            for(int j = 0; j <N; j++){
                if(board[i][j] == 0){
                    for(int c = 1; c <= 9; c++){
                        if(isValid(board, i, j, c)){
                            board[i][j] = c; 
                            
                            if(SolveSudoku(board))
                                return true; 
                            else
                                board[i][j] = 0; 
                        }
                    }
                    
                    return false;
                }
            }
        }
        return true;
    }
    
void printGrid(int arr[N][N]){
    for(int i = 0 ; i<N;i++){
        for(int j = 0 ; j<N ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    // 0 means unassigned cells
    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    if (SolveSudoku(grid) == true)
        printGrid(grid);
    else
        cout << "No solution exists";
 
    return 0;
}
 
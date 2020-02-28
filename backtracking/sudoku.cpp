#include <iostream>
#include <iomanip>
using std::cout;
using std::setw;



bool usedInRow(int sudoku[9][9], int row, int number){
    for(int i=0; i<9; ++i){
        if(sudoku[row][i] == number){
            return true;
        }
    }
    return false;
}

bool usedInCol(int sudoku[9][9], int col, int number){
    for(int i=0; i<9; ++i){
        if(sudoku[i][col] == number){
            return true;
        }
    }
    return false;
}

bool usedInBox(int sudoku[9][9], int row, int col, int number){
	for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            if(sudoku[i + row][j + col] == number){
                return true;
            }
        }
    }
    return false;
}
bool isSafe(int sudoku[9][9], int row, int col, int number){
    return  !usedInRow(sudoku, row, number) &&
            !usedInCol(sudoku, col, number) &&
            !usedInBox(sudoku, row - row%3, col - col%3, number) &&
            sudoku[row][col] == 0;
}

bool findFree(int sudoku[9][9], int& row, int& col){
    for(row = 0; row<9; ++row){
        for(col = 0; col<9; ++col){
            if(sudoku[row][col] == 0){
                return true;
            }
        }
    }

    return false;
}

bool solveSudoku(int sudoku[9][9]){
    int row, col;
    if(!findFree(sudoku, row, col)){
        return true;
    }

    for(int number = 1; number <= 9; ++number){
        if(isSafe(sudoku, row, col, number)){
            sudoku[row][col] = number;
            if(solveSudoku(sudoku)){
                return true;
            }
            sudoku[row][col] = 0;
        }
    }

    return false;
}

void printSudoku(int sudoku[9][9]){
    for(int i=0; i<9; ++i){
        for(int j=0; j<9; ++j){
            cout<<setw(3)<<sudoku[i][j];
        }
        cout<<"\n";
    }
}


int main(){

    int sudoku[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                        {5, 2, 0, 0, 0, 0, 0, 0, 0},
                        {0, 8, 7, 0, 0, 0, 0, 3, 1},
                        {0, 0, 3, 0, 1, 0, 0, 8, 0},
                        {9, 0, 0, 8, 6, 3, 0, 0, 5},
                        {0, 5, 0, 0, 9, 0, 6, 0, 0},
                        {1, 3, 0, 0, 0, 0, 2, 5, 0},
                        {0, 0, 0, 0, 0, 0, 0, 7, 4},
                        {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    if(solveSudoku(sudoku))
        printSudoku(sudoku);
    else{
        printSudoku(sudoku);
        cout << "No solution exists";
    }

    return 0;
}

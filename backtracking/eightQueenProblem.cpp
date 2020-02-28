#include<iostream>
using namespace std;
const int N = 8;
void printSolution(int board[N][N]) {
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cout << board[i][j]<<" ";
		}
		cout << endl;
	}
}
//A function that checks if a queen can be placed on board[row][col]
bool isSafe(int board[N][N], int row, int col) {
	//checking row on left side
	for (int  i = 0; i < col; i++){
		if (board[row][i]) return false;
	}
	//checking upper diagonal on left side
	for (int i = row, j=col;i>=0 && j>=0 ; i--, j--){
		if (board[i][j]) return false;
	}
	//check lower diagonal on left side
	for (int i = row, j = col; j >= 0 && i < N; i++, j--) {
		if (board[i][j]) return false;
	}
	return true;
}
//recursive function to solve queen problem
bool solve(int board[N][N], int col) {
	//base: if all queens are placed then return true
	if (col >= N) return true;
	for (int i = 0; i < N; i++){
		if (isSafe(board,i,col)){
			board[i][col] = 1;
			if (solve(board,col+1)){
				return true;
			}
			board[i][col] = 0;
		}
	}
	return false;
}
bool solveQueens() {
	int board[N][N] = { {0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0,0} };
	if (solve(board, 0) == false) {
		cout << "Solution does'n exist!";
		return false;
	}
	printSolution(board);
	return true;
}

int main() {
	solveQueens();
	return 0;
}
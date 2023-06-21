//The N - Queens Puzzle
//Link:-https://www.codingninjas.com/codestudio/problems/the-n-queens-puzzle_981286?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

#include <bits/stdc++.h> 

void addSolution(vector<vector<int>>&ans,vector<vector<int>> &board,int n){

	vector<int>temp;

	for(int i=0;i<n;i++){

		for(int j=0;j<n;j++){

			temp.push_back(board[i][j]);
		
		}
	}

	ans.push_back(temp);

}

bool isSafe(int row,int col,vector<vector<int>> &board,int n){

	int x=row;
	int y=col;

	//Check for same row
	while(y>=0){

		if(board[x][y]==1)return false;
		y--;

	}

	x=row;
	y=col;

	//Check for diagonal
	while(x>=0 && y>=0){

		if(board[x][y]==1)return false;
		y--;
		x--;

	}

	x=row;
	y=col;

	//Check for diagonal
	while(x<n && y>=0){

		if(board[x][y]==1)return false;
		y--;
		x++;

	}

	return true;

}

void solve(int col,vector<vector<int>>&ans,vector<vector<int>> &board,int n){

    //BASE CASE
	if(col==n){
		
		addSolution(ans,board,n);
        return ;

	}
    
	//SOLVE 1 CASE AND REST RECURSION WILL TAKE CARE
	for(int row=0;row<n;row++){

		if(isSafe(row,col,board,n)){

			board[row][col]=1;
			solve(col+1,ans,board,n);
			board[row][col]=0;

		}

	}

}

vector<vector<int>> nQueens(int n)
{
	// Write your code here

	vector<vector<int>> board(n,vector<int>(n,0));
	vector<vector<int>>ans;

	solve(0,ans,board,n);

	return ans;

}
#include <iostream>
using namespace std;
#define ROW 200
#define COL 200

//Spent few hours debugging this and FINALLY realised that my code printed out "Lost." instead of "Lost"

void scanarr(int row, int col, char map[][COL]){
	for (int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>map[i][j];
		}
	}
}

void go(int row, int col, char map[][COL], int numMoves, int movRow, int movCol){

	if(movRow<0 || movCol<0 || movRow>=row || movCol>=col){  //exceed the boundary
		cout<<"Out"<<endl;
		
	}else if(numMoves>=row*col){ //can't find the treasure!
		cout<<"Lost"<<endl;

	}else{
		switch(map[movRow][movCol]){
			case 'N': go(row, col, map, numMoves+1, movRow-1, movCol); break;
			case 'S': go(row, col, map, numMoves+1, movRow+1, movCol); break;
			case 'W': go(row, col, map, numMoves+1, movRow, movCol-1); break;
			case 'E': go(row, col, map, numMoves+1, movRow, movCol+1); break;
			case 'T': cout<<numMoves<<endl;
		}
	}

}

int main() {
    char map[ROW][COL];
    int row, col;
    int numMoves=0, movRow=0, movCol=0;

    cin>>row>>col;
    scanarr(row, col, map);
    go(row, col, map, numMoves, movRow, movCol);

    return 0;
}

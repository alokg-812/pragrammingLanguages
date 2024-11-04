#include<bits/stdc++.h>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if((sc==ec) && (sr==er)) return 1;
    int rightWays = maze(sr, sc+1, er, ec);
    int downWays = maze(sr+1, sc, er, ec);
    int totalWays = downWays + rightWays;
    return totalWays;
}

int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col == 1) return 1;
    int rightWays = maze2(row, col-1);
    int downWays = maze2(row-1, col);
    int totalWays = downWays + rightWays;
    return totalWays; 
}

void printPath(int sr, int sc, int er, int ec, string s){ // string will store the path of the maze
    if(sr>er || sc>ec) return ;
    if((sc==ec) && (sr==er)){ //destination reached
        cout<<s<<endl;
        return;
    }
    printPath(sr, sc+1, er, ec, s + 'R'); // Rightways
    printPath(sr+1, sc, er, ec, s + 'D'); // Downways
}

int main(){
    int r,c;
    cout<<"Enter rows and cols: ";
    cin>>r>>c;
    cout<<maze(1,1,r,c)<<endl;
    cout<<maze2(r,c)<<endl;
    printPath(1,1,r,c, "");
}
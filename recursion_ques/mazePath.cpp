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
    printPath(1,1,r,c, "");
}
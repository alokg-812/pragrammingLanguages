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

int main(){
    int r,c;
    cout<<"Enter rows and cols: ";
    cin>>r>>c;
    cout<<maze(0,0,1,2);
}
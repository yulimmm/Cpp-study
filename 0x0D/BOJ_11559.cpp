#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
char board[12][6] = {'.'};
bool vis[12][6] = {0};
int ans = 0;

bool pung(int x, int y, char c)
{
    int count = 1;
    queue<pair<int, int>>buff;
    while(1){
        for(int i = 0; i < 4; i++){
            if(x < 0 || y < 0 || x > 5 || y > 11) break;
            if(vis[x][y]==1||board[x][y]=='.') break;
            x+=dx[i];
            y+=dy[i];
            if(board[x][y]==c){
                buff.push({x,y});
                count++;
                vis[x][y] = 1;
            }
        }
    }

    if(count >= 4) {
        for(int i = 0; i < buff.size(); i++){
            pair<int,int>tmp = buff.front();
            board[tmp.first][tmp.second] = '.';
            buff.pop();
        }
        ans++;
        return true;
    }
    else{
        for(int i = 0; i < buff.size(); i++){
            pair<int,int>tmp = buff.front();
            vis[tmp.first][tmp.second] = 0;
            buff.pop();
        }
        return false;
    }
}

void printBoard()
{
    for(int i = 0; i<12; i++){
        for(int j= 0; j<6; j++){
            cout<<board[i][j];
        }
        cout<<'\n';
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    queue<pair<int, int>>q;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 6; j++){
            cin >> board[i][j];
            if(board[i][j]!='.') q.push({i,j});
        }
    }
    
    while(!q.empty())
    {
        pair<int, int>point = q.front(); q.pop();
        int x = point.first;
        int y = point.second;
        pung(x, y, board[x][y]);
    }
    printBoard();
    cout<<"ans: "<<ans;
    
    return 0;
}

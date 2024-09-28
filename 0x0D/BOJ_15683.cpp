#include <iostream>
using namespace std;

int dx[4] = {1,0,-1,0}; //cctv1, 4번에서 사용
int dy[4] = {0,1,0,-1};
int cctv2_dx[2] = {1,0};
int cctv2_dy[2] = {0,1};
//cctv2_dx, dy = x,y 방향이랑 같음. 
int cctv3_dx[4] = {1,-1,-1,1};
int cctv3_dy[4] = {1,1,-1,-1};
//cctv5는 모든 방향 

int board[10][10];
int view[10][10]; // cctv 시야
int n, m;
int cant_see = 0; // 사각지대 개수

void cctv1(int x, int y, int k)
{   
    int cur_x = x+1;
    int cur_y = y+1;
    while( cur_x < n && cur_y < m){
        if(board[cur_x+dx[k]][cur_y+dy[k]]==6) break;
        view[cur_x+dx[k]][cur_y+dy[k]] = 1;
        cur_x++; cur_y++;
    }
}

void cctv2(int x, int y, int k)
{   
    int cur_x = x+1;
    int cur_y = y+1;
    while( cur_x < n && cur_y < m){
        if(board[cur_x+cctv2_dx[k]][cur_y+cctv2_dy[k]]==6) break;
        view[cur_x+cctv2_dx[k]][cur_y+cctv2_dy[k]] = 1;
        cur_x++; cur_y++;
    }
    int cur_x = x-1;
    int cur_y = y-1;
    while( cur_x > 0 && cur_y > 0){
        if(board[cur_x-cctv2_dx[k]][cur_y-cctv2_dy[k]]==6) break;
        view[cur_x-cctv2_dx[k]][cur_y-cctv2_dy[k]] = 1;
        cur_x++; cur_y++;
    }
}

int check_cctv(int k)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j]==1){

            }

            else if(board[i][j]==2){
                
            }

            else if(board[i][j]==3){
                
            }

            else if(board[i][j]==4){
                
            }

            else if(board[i][j]==5){
                
            }
        }
    }
    return cant_see;
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int min_cant_see = 1000;
    cin >> n >> m;
    //board 입력 받기
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    //for(4){cctv 있는 곳 검사 -> 방향대로 시야 체크}
    for(int k = 0; k < 4; k++){
        int temp_cant_see = check_cctv(k);
        if(min_cant_see > temp_cant_see) min_cant_see = temp_cant_see;
    }

    cout<<min_cant_see;

    return 0;
}

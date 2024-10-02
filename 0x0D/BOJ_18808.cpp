#include <iostream>
using namespace std;

bool board[45][45] = {0};//labtop
bool OrignSticker[15][15] = {0};
bool RotSticker[15][15] = {0};
int n, m; //board
int r, c;
int k;

bool inBoard(int x, int y)
{
    if(x > n || y > m || x < 0 || y < 0) return false;
    return true;
}

void rotation()
{
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            RotSticker[j][r-i] = OrignSticker[i][j];
        }
    }
}

bool filled(int x, int y) // 채웠으면 true 실패하면 false. start 위치  
{
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(board[x+i][y+j] == 1) false;
            if(!inBoard(x+i, y+j)) false;
        }
    }
    //문제 없으면 그때 보드에 채우기 
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            board[x+i][y+j] = RotSticker[i][j];
        }
    }
    return true;
}

bool tryFilled()
{
    for(int x = 0; x < n; x++){
        for(int y = 0; y < m; y++){
            if(filled(x,y)) return true;
        }
    }
    return false;
}

void formatOrignSticker()
{
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            OrignSticker[i][j] = 0;
        }
    }
}

void formatRotSticker()
{
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            RotSticker[i][j] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m >> k;
    bool okay = false;
    for(int i = 0; i < k; i++){
        cin >> r >> c;

        for(int i = 0; i < 3; i++){
            if(!tryFilled()) {
                formatRotSticker();
                rotation();
            }
        }
        formatOrignSticker();
    }
    
    //count
    int noSticker = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 0) noSticker++;
        }
    }
    cout<<noSticker;
    return 0;
}

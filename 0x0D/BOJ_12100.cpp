#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int board[20][20];
int tmp[20][20] = {0};
int sortBoard[20][20] = {0};
int n;
int MaxNum = 0;

vector<int>direction = {0,1,2,3}; //x,y

void scroll(int dir)
{
    if(dir == 0){ // <-
        for(int x = 0; x < n; x++){
            for(int y = 0; y < n; y++){
                if(board[x][y]!=0){
                    if(board[x][y] == board[x][y+1]){
                        board[x][y+1] = 0;
                        tmp[x][y] =  board[x][y] * 2;
                        if(MaxNum < tmp[x][y]) MaxNum = tmp[x][y];
                    }
                    else{
                        tmp[x][y] = board[x][y];
                    }
                }
            }
        }
        for(int k = 0; k < n; k++){ //다시 정렬 
            int left = 0;
            for(int i = 0; i < n; i++){
                if(tmp[k][i]!=0){
                    sortBoard[k][left] = tmp[k][i];
                    left++;
                }
            }
        }

    }

    else if(dir == 1){ //down
        for(int x = 0; x < n; x++){
            for(int y = 0; y < n; y++){
                if(board[x][y]!=0){
                    if(board[x][y] == board[x+1][y]){
                        board[x+1][y] = 0;
                        tmp[x][y] =  board[x][y] * 2;
                        if(MaxNum < tmp[x][y]) MaxNum = tmp[x][y];
                    }
                    else{
                        tmp[x][y] = board[x][y];
                    }
                }
            }
        }
        for(int k = 0; k < n; k++){ //다시 정렬 
            int down = n-1;
            for(int i = n-1; i >= 0; i--){
                if(tmp[i][k]!=0){
                    sortBoard[down][k] = tmp[i][k];
                    down--;
                }
            }
        }
    }

    else if(dir == 2){ //->
        for(int x = n-1; x >= 0; x--){
            for(int y = n-1; y >= 0; y--){
                if(board[x][y]!=0){
                    if(board[x][y] == board[x][y-1]){
                        board[x][y-1] = 0;
                        tmp[x][y] =  board[x][y] * 2;
                        if(MaxNum < tmp[x][y]) MaxNum = tmp[x][y];
                    }
                    else{
                        tmp[x][y] = board[x][y];
                    }
                }
            }
        }
        for(int k = 0; k < n; k++){ //다시 정렬 
            int right = n-1;
            for(int i = n-1; i >= 0; i--){
                if(tmp[k][i]!=0){
                    sortBoard[k][right] = tmp[k][i];
                    right--;
                }
            }
        }
    }

    else{
        for(int x = n-1; x >= 0; x--){ //up
            for(int y = n-1; y >= 0; y--){
                if(board[x][y]!=0){
                    if(board[x][y] == board[x-1][y]){
                        board[x-1][y] = 0;
                        tmp[x][y] =  board[x][y] * 2;
                        if(MaxNum < tmp[x][y]) MaxNum = tmp[x][y];
                    }
                    else{
                        tmp[x][y] = board[x][y];
                    }
                }
            }
        }
        for(int k = 0; k < n; k++){ //다시 정렬 
            int up = 0;
            for(int i = 0; i < n; i++){
                if(tmp[i][k]!=0){
                    sortBoard[up][k] = tmp[i][k];
                    up++;
                }
            }
        }
    }
}

void printtmp()
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<tmp[i][j];
        }
        cout<<endl;
    }
}

void printsortB()
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<sortBoard[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n;
    for(int i = 0; i< n; i++){
        for(int j = 0; j< n; j++){
            cin >> board[i][j];
            if(board[i][j]>MaxNum) MaxNum = board[i][j];
        }
    }
    scroll(1);
    cout<<"---------------\n";
    printtmp();
    cout<<"---------------\n";
    printsortB();
    cout<<"result: "<<MaxNum<<'\n';

    //4 방향 다 고려하는 거 4! = 24
    //최대 5번 실행 => 24 * 5
    /*
    for(int k = 0; k < 5; k++){
        do {
            for (int i = 0; i < direction.size(); i++) {
                scroll(direction[i]);
            }
        } while (next_permutation(direction.begin(), direction.end()));  // 모든 순열을 다 구할 때까지 반복

    }
    */
    return 0;
}

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string board[4];

// x : 번호, dir : 방향, 1번의 회전을 처리하는 함수
void go(int x, int dir) {
  int dirs[4] = {};
  dirs[x] = dir;
  // 왼쪽으로 회전을 전파
  int idx = x;
  while (idx > 0 && board[idx][6] != board[idx-1][2]){
    dirs[idx-1] = -dirs[idx];
    idx--;
  }
  
  // 오른쪽으로 회전을 전파
  idx = x;
  while (idx < 3 && board[idx][2] != board[idx+1][6]){
    dirs[idx+1] = -dirs[idx];
    idx++;
  }

  for(int i = 0; i < 4; i++) {
    if(dirs[i] == -1)
      rotate(board[i].begin(), board[i].begin()+1, board[i].end());    
    else if(dirs[i] == 1)
      rotate(board[i].begin(), board[i].begin()+7, board[i].end());
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for (int i = 0; i < 4; i++) cin >> board[i];
  int k;
  cin >> k;
  while (k--) {
    int x, dir;
    cin >> x >> dir;
    go(x - 1, dir);
  }
  int ans = 0;
  for (int i = 0; i < 4; i++)
    if (board[i][0] == '1') ans += (1 << i);
  cout << ans;
}

/*
#include <iostream>
#include <string>
using namespace std;

string wheel[4];
int cur[4] = {0}; //12시 방향 

int redefine(int cursor)
{
  if(cursor < 0){
    cursor += 8;
  }
  else if(cursor > 7) cursor %= 8;
  return cursor;
}

void move(int num, int dir)
{
  int origCur[4];
  for(int i = 0; i < 4; i++){
    origCur[i] = cur[i];
  }
  if(num == 0){
    cur[0] = redefine(cur[0]+dir);
    if(wheel[0][origCur[0]+2] == (wheel[1][origCur[1]-2])){
      cur[1] = redefine(cur[1]+dir);
    }
    if(wheel[1][origCur[1]+2] == (wheel[2][origCur[1]-2])){
      cur[2] = redefine(cur[2]+dir);
    }
    if(wheel[2][origCur[0]+2] == (wheel[3][origCur[1]-2])){
      cur[3] = redefine(cur[3]+dir);
    }
  }
  else if(num == 1){
    cur[1] = redefine(cur[1]+dir);
    if(wheel[1][origCur[1]-2] == (wheel[0][origCur[0]+2])){
      cur[0] = redefine(cur[0]+dir);
    }
    if(wheel[1][origCur[1]+2] == (wheel[2][origCur[1]-2])){
      cur[2] = redefine(cur[2]+dir);
    }
    if(wheel[2][origCur[0]+2] == (wheel[3][origCur[1]-2])){
      cur[3] = redefine(cur[3]+dir);
    }
  }
  else if(num == 2){
    cur[2] = redefine(cur[2]+dir);
    if(wheel[2][origCur[2]-2] == (wheel[1][origCur[1]+2])){
      cur[1] = redefine(cur[1]+dir);
    }
    if(wheel[2][origCur[2]+2] == (wheel[3][origCur[3]-2])){
      cur[3] = redefine(cur[3]+dir);
    }
    if(wheel[1][origCur[0]-2] == (wheel[0][origCur[0]+2])){
      cur[0] = redefine(cur[0]+dir);
    }
  }
  else if(num == 3){
    cur[3] = redefine(cur[3]+dir);
    if(wheel[3][origCur[3]-2] == (wheel[2][origCur[2]+2])){
      cur[2] = redefine(cur[2]+dir);
    }
    if(wheel[2][origCur[2]-2] == (wheel[1][origCur[1]+2])){
      cur[1] = redefine(cur[1]+dir);
    }
    if(wheel[1][origCur[1]-2] == (wheel[0][origCur[0]+2])){
      cur[0] = redefine(cur[0]+dir);
    }
  }
}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  for(int i = 0; i < 4; i++){
    cin >> wheel[i];
  }

  int cnt, num, dir;
  cin >> cnt;

  for(int i = 0; i < cnt; i++){
    cin >> num >> dir;
    int num = num-1;
    move(num, dir);
  }

  int result = 0;
  if(wheel[0][cur[0]]=='1')result++;
  if(wheel[1][cur[1]]=='1')result += 2;
  if(wheel[2][cur[2]]=='1')result += 4;
  if(wheel[3][cur[3]]=='1')result += 8;

  cout<< result;

  return 0;
}
*/

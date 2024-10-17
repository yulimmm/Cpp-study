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

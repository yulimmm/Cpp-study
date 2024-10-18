#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string wheel[4]; //01234567

void run(int num, int dir)
{
  int dirs[4] = {};
  dirs[num] = dir;
  int idx = num;
  //왼쪽 검사
  while(idx > 0 && wheel[idx][6]!=wheel[idx-1][2]){
    dirs[idx-1] = -dirs[idx];
    idx--;
  }
  //오른쪽으로 검사
  idx = num;
  while(idx < 3 && wheel[idx][2]!=wheel[idx+1][6]){
    dirs[idx+1] = -dirs[idx];
    idx++;
  }
  
  for(int i = 0; i < 4; i++){
    if(dirs[i]==-1){
      rotate(wheel[i].begin(), wheel[i].begin()+1, wheel[i].end());
    }
    if(dirs[i]==1){
      rotate(wheel[i].begin(), wheel[i].begin()+7, wheel[i].end());
    }
  }
  return;
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
    run(num-1, dir);
  }

  int ans = 0;
  for(int i = 0; i< 4; i++){
    if(wheel[i][0]=='1') ans+=(1<<i);
  }

  cout << ans;
  return 0;
}

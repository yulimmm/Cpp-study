#include <iostream>
#include <string>
using namespace std;

char board[5][5];
bool isused[5][5];
int total = 0;

void func(int x_st, int y_st, int k, int s_cnt) // 7명 중 몇 명인지, 다솜이 몇명인지
{
  if(k == 7){
    if(s_cnt >= 4) {
      total++;
      for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
          cout << isused[i][j];
        }
        cout << '\n';
      }
      cout << "s_cnt: " << s_cnt << "\n\n";
    }
    return;
  }
  for(int x = x_st; x < 5; ++x){
    for(int y = y_st; y < 5; ++y){
      bool canMask = false;
      if(x>0 && isused[x-1][y]) canMask = true;
      if(y>0 && isused[x][y-1]) canMask = true;
      if(x==0 && y==0) canMask = true;
      if(canMask){
        cout<<"x: "<<x<<"    y: "<<y<<'\n';
        isused[x][y] = 1;
        if(board[x][y]=='S') s_cnt++;
        func(x, y, k+1, s_cnt);
        isused[x][y] = 0;
      }
    }
  }

}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  for(int x = 0; x < 5; x++){
    for(int y = 0; y < 5; y++){
      cin >> board[x][y]; // 'S' 또는 'Y'를 입력합니다.
    }
  }
  func(0, 0, 0, 0);
  cout << total;
  return 0;
}

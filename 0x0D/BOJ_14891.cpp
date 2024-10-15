#include <iostream>
using namespace std;

int wheel[4][8];
int cur[4] = {0}; //12시 방향

void redefine()
{

}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 8; j++){
      cin >> wheel[i][j];
    }
  }
  int cnt, num, dir;
  cin >> cnt;
  for(int i = 0; i < cnt; i++){
    cin >> num >> dir;
    int num = num-1;
    if(dir == -1){
      cur[num] = cur[num] -1;
      
    }

    
  }

  return 0;
}

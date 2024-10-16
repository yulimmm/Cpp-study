#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>wheel;
vector<int>cursor = {0};

void move(int num, int dir)
{
  if(num == 0){
    
    cur[num]+=dir;
  }
}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 8; j++){
      int tmp;
      cin >> tmp;
      wheel[i][j].push(tmp);
    }
  }
  int cnt, num, dir;
  cin >> cnt;
  for(int i = 0; i < cnt; i++){
    cin >> num >> dir;
    int num = num-1;
    move(num, dir);
    
  }

  return 0;
}

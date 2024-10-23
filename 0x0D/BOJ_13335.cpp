#include <iostream>
#include <vector>
using namespace std;

vector<int> isBridge;
int truck[1000] = {0};
int n, w, l; //w 다리 길이, l 하중 무게
int t = 0;

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> w >> l;
  int cur = 0, tmpW = 0;
  int st = 0; //same time 
  int pass = 0;
  for(int i = 0; i<n; i++){
    cin>>truck[i];
  }
  while(pass != n){
    tmpW += truck[cur];
    if(cur < n){
      int check = tmpW + truck[cur+1];
      st++;
      if(check > l){
        t+=(w+st);
        st = 0;
        pass++;
      }
    }
    else{
      t+=(w+st);
      pass++;
    }
    cur++;
  }

  cout<< t;
  return 0;
}

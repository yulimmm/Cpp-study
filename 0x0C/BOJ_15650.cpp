#include <iostream>
using namespace std;

int m,n;
int isused[10];
int arr[10];

void func(int k)
{
  if(k==n){
    for(int i = 0; i < n; i++){
      cout<<arr[i]<<' ';
    }
    cout<<'\n';
    return;
  }
  for(int i = k+1; i <= m; i++){
    if(!isused[i]&&arr[k-1]<i){
      arr[k] = i;
      isused[i] = 1;
      func(k+1);
      isused[i] = 0;
    }
  }
}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> m >> n;
  func(0);
  return 0;
}

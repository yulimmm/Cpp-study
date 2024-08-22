#include <iostream>
using namespace std;

int m,n;
//int isused[10];
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
  for(int i = 1; i <= m; i++){
    arr[k] = i;
    func(k+1);
  }
}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> m >> n;
  func(0);
  return 0;
}

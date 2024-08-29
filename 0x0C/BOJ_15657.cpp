#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10];
int input[10];
bool isused[10];

void func(int k){
  if(k == m){
    for(int i = 0; i<m; i++){
      cout<<arr[i]<<' ';
    }
    cout<<'\n';
    return;
  }
  for(int i = 0; i<n; i++){
    if(k==0){
      arr[k] = input[i];
      func(k+1);
    }
    else if(k!=0 && arr[k-1]<=input[i]){
      arr[k] = input[i];
      func(k+1);
    }
  }
}

int main()
{
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> m;
  for(int i = 0; i<n; i++){
    cin >> input[i];
  }
  sort(input, input+n);
  func(0);
  return 0;
}

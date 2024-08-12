#include <iostream>
using namespace std;
int arr[10];
bool isused[10] ={false};
int n, m; //n:총 개수 m: 한줄에 몇개?

void check(int k)
{
    if(k==m){
        for(int i = 0; i<m; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!isused[i]){
            arr[k] = i;
            isused[i] = true;
            check(k+1);
            isused[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    check(0);
    return 0;
}

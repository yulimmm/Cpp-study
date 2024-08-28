#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int input_arr[10];
int arr[10];
bool isused[10];

void func(int k)
{
    if(k==m){
        for(int i = 0; i < m; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i = 0; i<n; i++){
        if(!isused[i]){
            arr[k] = input_arr[i];
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        cin >> input_arr[i];
    }
    sort(input_arr, input_arr+n);
    func(0);
    return 0;
}

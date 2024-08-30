#include <iostream>
using namespace std;

int n=-1;
int arr[13];
int input[13];
bool isused[13];

void func(int k)
{
    if(k == 6){
        for(int i = 0; i<6; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i = 0; i<n; i++){
        if(!isused[i]&&arr[k-1]<input[i]){
            arr[k] = input[i];
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    while(n!=0){
        cin>>n;
        for(int i = 0; i<n; i++) cin>>input[i];
        func(0);
        cout<<'\n';
    }
    return 0;
}

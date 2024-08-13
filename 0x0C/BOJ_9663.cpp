#include <iostream>
using namespace std;

int n;
bool isused1[16]; //열
bool isused2[31]; //증가 대각선
bool isused3[31]; //감소 대각선
int cnt = 0;

void func(int cur)
{
    if(cur==n){
        cnt++;
        return;
    }
    for(int i = 0; i<n; i++){
        if(isused1[i]||isused2[i+cur]||isused3[i-cur+n-1]) 
            continue;
        isused1[i] = 1;
        isused2[cur+i] = 1;
        isused3[i-cur+n-1] = 1;
        func(cur+1); //cur++로 쓰면 안 됨. 
        isused1[i] = 0;
        isused2[cur+i] = 0;
        isused3[i-cur+n-1] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    func(0);
    cout<<cnt;
    return 0;
}

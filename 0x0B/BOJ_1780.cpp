#include <iostream>
using namespace std;

int v[2187][2187];
int cnt[3] = {0}; // -1. 0. 1

bool check(int x, int y, int n)
{
    for(int i = x; i < x+n; i++){
        for(int j = y; j < y+n; j++){
            if(v[x][y] != v[i][j]){
                return false;
            }
        }
    }
    return true;
}

void func(int x, int y, int n)
{
    if(check(x, y, n)){
        int val = v[x][y];
        cnt[val+1]++;
        return;
    }
    int z = n/3;
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            func(x+z*i, y+z*j, z);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin>>num;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cin>>v[i][j];
        }
    }

    func(0, 0, num);
    cout<<cnt[0]<<'\n';
    cout<<cnt[1]<<'\n';
    cout<<cnt[2]<<'\n';

    return 0;
}

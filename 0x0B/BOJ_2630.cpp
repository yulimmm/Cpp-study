#include <iostream>
using namespace std;

int paper[129][129];
int cnt[2] = {0}; //0,1

bool check(int x, int y, int z)
{
    for(int i = x; i < x+z; i++){
        for(int j = y; j <y+z; j++){
            if(paper[x][y] != paper[i][j]) return false;
        }
    }
    return true;
}

void func(int x, int y, int z)
{
    if(check(x, y, z)){
        cnt[paper[x][y]]++;
        return;
    }
    else{
       int temp = z/2;
       for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                func(x+temp*i, y+temp*j, temp); 
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j < n; j++){
            cin >> paper[i][j];
        }
    }

    func(0, 0, n);
    cout<<cnt[0]<<'\n'<<cnt[1]<<'\n';

    return 0;
}

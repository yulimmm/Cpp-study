#include <iostream>
using namespace std;

int paper[65][65];

bool check(int x, int y, int z)
{
    for(int i = x; i < x+z; i++){
        for(int j = y; j <y+z; j++){
            if(paper[x][y]!=paper[i][j]) return false;
        }
    }
    return true;
}

void func(int x, int y, int z)
{
    if(check(x, y, z)){
        cout<<paper[x][y];
        return;
    }
    else{
        cout<<'(';
        int temp = z/2;
        for(int i = 0; i<2; i++){
            for(int j =0; j<2; j++){
                func(x+temp*i, y+temp*j, temp);
            }
        }
        cout<<')';
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int N; 
    cin >> N;
    cin.ignore();
    for(int i =0; i < N; i++){
        for(int j = 0; j < N; j++){
            paper[i][j] = cin.get()-'0';
        }
        cin.ignore();
    }
    
    func(0,0,N);
    return 0;
}

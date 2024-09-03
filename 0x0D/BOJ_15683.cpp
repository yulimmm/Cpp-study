#include <iostream>
using namespace std;

int min = 100;
int room[10][10];
int n, m;

void count_4()
{
    int temp = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(room[i][j]==0){
                temp++;
            }
        }
    }
    if(temp<min) min = temp;
    return;
}

void mark()
{
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(room[i][j]==1){
                
            }
        }
    }
}

void back_tracking()
{
    
}
  

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    for(int i = 0; i<10; i++){
        fill(room[i], room[i]+10, -1);
    }
    
    cin >> n >> m;
    //input
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> room[i][j];
        }
    }
    
    //input
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(room[i][j]==1){
                
            }
        }
    }
    return 0;
}

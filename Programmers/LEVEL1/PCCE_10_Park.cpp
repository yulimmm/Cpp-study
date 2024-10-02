//[PCCE 기출문제] 10번 / 공원
#include <string>
#include <vector>

using namespace std;

bool isOkay(int x, int y, int mat, vector<vector<string>> park)
{
    for(int i = 0; i < mat; i++){
        for(int j = 0; j < mat; j++){
            if(park[i+x][j+y] != "-1") return false;
        }
    }
    return true;
}
    
int solution(vector<int> mats, vector<vector<string>> park) {
    int n = park.size(); //세로
    int m = park[0].size(); //가로
    int maxMat = -1;
    
    for(int k = 0; k < mats.size(); k++){
        
        for(int x = 0; x <= n-mats[k]; x++ ){
            for(int y = 0; y <= m-mats[k]; y++){
                if(isOkay(x,y,mats[k], park)){
                    if(mats[k] > maxMat) maxMat = mats[k];
                }
            }
        }
    }

    return maxMat;
}

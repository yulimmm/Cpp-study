//2024 KAKAO WINTER INTERNSHIP 가장 많이 받은 선물
#include <vector>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    map<string, int>nameTable;
    int totalF = friends.size();
    for(int i = 0; i < totalF; i++){
        nameTable.insert({friends[i], i});
    }
    int giftTable[50][50] = {0};

    for(int i = 0; i < gifts.size(); i++){
        stringstream ss(gifts[i]);
        string give;
        string take;
        ss >> give >> take;
        auto giveID = nameTable.find(give);
        auto takeID = nameTable.find(take);
        //cout << give <<": "<<giveID->second <<endl;
        giftTable[giveID->second][takeID->second]++;
    }
    
    //선물지수 계산
    int giftRate[50] = {0};
    int give[50] = {0};
    int take[50] = {0};
    for(int i = 0; i < totalF; i++){
        for(int j = 0; j < totalF; j++){
            give[i] += giftTable[i][j];
            take[i] += giftTable[j][i];
        }
    }

    for(int i = 0; i < totalF; i++){
        giftRate[i] = give[i]-take[i];
        //cout<<i<<"번째 선물지수: "<<giftRate[i]<<'\n';
    }

    int expect[50] = {0};
    for(int i = 0; i < totalF; i++){
        for(int j = 0; j < totalF; j++){
            if(giftTable[i][j] > giftTable[j][i]){
                expect[i]++;
            }
            else if(giftTable[i][j] < giftTable[j][i]){
                expect[j]++;
            }
            else{ // 같다면 선물지수 비교
                if(giftRate[i]>giftRate[j]){
                    expect[i]++;
                }
                else if(giftRate[i]<giftRate[j]){
                    expect[j]++;
                }
            }
        }
    }
    int solution = 0;
    //cout<<"선물 받을 예정:";
    for(int i = 0; i < totalF; i++){
        //cout<<expect[i]<<" ";
        if(expect[i]>solution){
            solution = expect[i];
        }
    }
    return solution/2;
}

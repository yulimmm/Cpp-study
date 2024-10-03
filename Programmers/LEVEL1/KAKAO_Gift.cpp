#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct gift{
    string name;
    int give = 0;
    int take = 0;
    int rate; //선물지수 = 준 거 - 받은 거 
    bool expect[50];
};

int solution(vector<string> friends, vector<string> gifts) {
    int totalFriends = friends.size();
    gift friendList[totalFriends];
    
    for(int i = 0; i < totalFriends; i++){
        friendList[i].name = friends[i];
    }
    
    for(int i = 0; i < gifts.size(); i++){
        for(int k = 0; k < totalFriends; k++){
            stringstream ss(gifts[i]);
            string give;
            string take;
            ss >> give >> take;
            if(friendList[i].name == give){
                friendList[i].give++;
            }
            if(friendList[i].name == take){
                friendList[i].take++;
            }
        }
    }
    
    int maxRate = -10000;
    int maxRateIndex;
    for(int i = 0; i < totalFriends; i++){
        friendList[i].rate = friendList[i].give - friendList[i].take;
        if(maxRate<friendList[i].rate) {
            maxRate = friendList[i].rate;
            maxRateIndex = i;
        }
    }
    
    int answer = 0;
    for(int i = 0; i < totalFriends; i++){
        if(friendList[maxRateIndex].rate>friendList[i].rate) answer++;
    }
    return answer;
}

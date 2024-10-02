//LEVEL 1 [PCCE 기출문제] 9번 / 지폐 접기 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int W1 = wallet[0];
    int W2 = wallet[1];
    if(W1 < W2) swap(W1, W2);
    //cout<<"W1: "<<W1<<" W2: "<<W2<<'\n';
    int B1 = bill[0];
    int B2 = bill[1];
    if(B1 < B2) swap(B1, B2);
    //cout<<"B1: "<<B1<<" B2: "<<B2<<'\n';
    
    int answer = 0;
    
    while(W1 < B1 || W2 < B2){
        B1 = B1/2;
        if(B1<B2) swap(B1, B2);
        //cout<<"B1: "<<B1<<" B2: "<<B2<<'\n';
        answer++;
    }
    
    return answer;
}

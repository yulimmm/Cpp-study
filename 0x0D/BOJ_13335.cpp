#include <iostream>
#include <queue>
using namespace std;

int truck[1000]; // 트럭 배열
int n, w, l; // 트럭 수, 다리 길이, 다리 하중

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> w >> l;
    
    for(int i = 0; i < n; i++) {
        cin >> truck[i];
    }
    
    queue<int> bridge; // 다리 위의 트럭을 관리하는 큐
    int time = 0; // 현재 시간
    int curWeight = 0; // 현재 다리 위의 트럭 총 무게
    int idx = 0; // 현재 트럭을 가리키는 인덱스

    // 다리에 있는 트럭의 상태를 큐로 관리
    for (int i = 0; i < w; i++) {
        bridge.push(0);  // 처음엔 다리가 비어있음
    }

    // 모든 트럭이 다리를 건널 때까지 반복
    while (idx < n || curWeight > 0) {
        time++;  // 1초 경과

        // 다리의 첫 번째 트럭이 다리를 빠져나감
        curWeight -= bridge.front();
        bridge.pop();

        // 새로운 트럭을 다리 위에 올릴 수 있는지 확인
        if (idx < n && curWeight + truck[idx] <= l) {
            bridge.push(truck[idx]);  // 트럭을 다리 위에 올림
            curWeight += truck[idx];  // 현재 다리 위 무게 갱신
            idx++;  // 다음 트럭을 가리킴
        } else {
            bridge.push(0);  // 트럭을 올릴 수 없으면 빈 공간 추가
        }
    }

    cout << time;  // 트럭들이 모두 다리를 건너는 데 걸린 시간 출력
    return 0;
}

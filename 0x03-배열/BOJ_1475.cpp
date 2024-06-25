#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int NumSet[10] = { 0 };
    int MaxSet = 0;
    string N;
    cin >> N;

    for (int i = 0; i < N.size(); i++) {
        NumSet[N[i] - '0']++;
    }
    for (int i = 0; i < 9; i++) {
        if (i == 6) {
            if ((NumSet[6] != 0) | (NumSet[9] != 0)) {
                if ((NumSet[6] + NumSet[9]) % 2 == 0) {
                    NumSet[6] = (NumSet[6] + NumSet[9]) / 2;
                }
                else
                    NumSet[6] = (NumSet[6] + NumSet[9]) / 2 +1;
            }
        }
        if (NumSet[i] > MaxSet)
            MaxSet = NumSet[i];
    }

    cout << MaxSet;

    return 0;
}

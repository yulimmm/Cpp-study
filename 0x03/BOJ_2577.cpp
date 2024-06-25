#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A, B, C;
    int arr[10] = { 0 };
    cin >> A >> B >> C;
    string result = to_string(A * B * C);

    for (int i = 0; i < result.size(); i++) {
        char idx = result[i];
        arr[idx-'0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\n";
    }
}

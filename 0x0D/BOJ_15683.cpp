#include <iostream>
#include <vector>
using namespace std;

const int MAX_SIZE = 10;
int board[MAX_SIZE][MAX_SIZE];
int n, m;

struct Cctv {
    int num;
    int x;
    int y;
};

vector<Cctv> cctvs;

void print_board() {
    for(int i = 0; i < MAX_SIZE; ++i) {
        for(int j = 0; j < MAX_SIZE; ++j) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 0; i < MAX_SIZE; ++i) {
        fill(board[i], board[i] + MAX_SIZE, -1);
    }

    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> board[i][j];
            if(board[i][j] != 0) {
                cctvs.push_back(Cctv{board[i][j], i, j});
            }
        }
    }

    for(const auto& cctv : cctvs) {
        cout << cctv.num << ' ' << cctv.x << ' ' << cctv.y << '\n';
    }

    return 0;
}

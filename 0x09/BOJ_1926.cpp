#include <iostream>
#include <utility> //pair 쓰기 위함. 
#include <queue>
using namespace std;

#define X first //pair를 잘 쓰기 위함?
#define Y second
int board[502][502]; //0이면 빨간 칸 1이면 파란칸
bool vis[502][502] = { 0 }; //방문 여부. 방문하면 1
int dx[4] = { 1,0,-1,0 }; //상하좌우 
int dy[4] = { 0,1,0,-1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m; //x축이 n, y축이 m 
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int size_arr[2500] = { 0 };
	int index = 0;

	queue<pair<int, int>> Q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (board[i][j] != 1 || vis[i][j] != 0) continue; //그림이 아니거나, 지나간 곳이면 패스. 
			int size = 1;
			vis[i][j] = 1;
			Q.push({ i,j });

			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //범위에 들어오는지 확인
					if (vis[nx][ny] || board[nx][ny] != 1) continue; //이미 방문했거나 파란 칸이 아닌 경우엔 패스 
					vis[nx][ny] = 1; //방문했다고 표시
					Q.push({ nx,ny }); //Q에 추가.
					size++;
				}
			}
			size_arr[index] = size;
			index++;

		}
	}

	int i = 0;
	int max = 0;
	//cout << "\nsize_arr: ";
	while (size_arr[i] != 0) {
		if (size_arr[i] > max) {
			max = size_arr[i];
		}
		//cout << size_arr[i] << " ";
		i++;
	}

	cout << i << '\n' << max;

	return 0;
}
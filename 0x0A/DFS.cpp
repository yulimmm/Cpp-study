#include <iostream>
#include <stack>
#include <utility>
using namespace std;

#define X first //pair를 잘 쓰기 위함?
#define Y second
int board[502][502] = {  }; //0이면 빨간 칸 1이면 파란칸
bool vis[502][502]; //방문 여부 방문하면 1
int n = 7, m = 10; //행과 열
int dx[4] = { 1,0,-1,0 }; //상하좌우 
int dy[4] = { 0,1,0,-1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<pair<int, int>> S;
	vis[0][0] = 1;
	S.push({ 0,0 });

	while (!S.empty()) {
		pair<int, int> cur = S.top(); 
		S.pop();
		cout << '(' << cur.X << ", " << cur.Y << ") -> "; //방문순서를 나타내기 위해
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //범위에 들어오는지 확인
			if (vis[nx][ny] || board[nx][ny] != 1) continue; //이미 방문했거나 파란 칸이 아닌 경우엔 패스 
			vis[nx][ny] = 1; //방문했다고 표시
			S.push({ nx,ny }); //S에 추가. 
		}
	}

	return 0;
}
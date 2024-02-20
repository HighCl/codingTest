//#include "Util.h"

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;

int M, N;                       // 미로 크기
vector<vector<int>> maze;             // 미로 표현용 3차원 배열
vector<vector<int>> visited;             // 방문 기록용 2차원 배열
vector<vector<int>> dist;             // 이동칸 기록용 2차원 배열

int x_dir[6] = { -1, 1, 0, 0 };   // 상화좌우 x축 방향
int y_dir[6] = { 0, 0, -1, 1 };   // 상화좌우 y축 방향

queue<pair<int, int> > q;        // 탐색 좌표 저장용 queue




void Input()
{
	cin >> N >> M;                      // 미로 크기 입력

	maze.assign(N, vector<int>(M));
	visited.assign(N, vector<int>(M, 0));
	dist.assign(N, vector<int>(M, 0));

	for (size_t y = 0; y < N; ++y)
	{
		string input;
		cin >> input;
		for (size_t i = 0; i < M; i++)
		{
			maze[y][i] = input[i] - '0';
		}
	}
}

// 미로 경로 탐색
void bfs(int start_x, int start_y)
{
	visited[start_x][start_y] = 1;          // 입력 받은 시작 좌표를 방문
	q.push(make_pair(start_x, start_y));     // queue 에 삽입
	dist[start_x][start_y]++;               // 시작 좌표까지 이동한 칸을 1로 지정

	// 모든 좌표를 탐색할 때까지 반복
	while (!q.empty()) {

		// queue 의 front 좌표를, 현재 좌표로 지정
		int x = q.front().first;
		int y = q.front().second;

		// qeueu 의 front 좌표 제거
		q.pop();

		// 현재 좌표와 상하좌우로 인접한 좌표 확인
		for (int i = 0; i < 4; ++i)
		{
			// 현재 좌표와 상하좌우로 인접한 좌표
			int x_new = x + x_dir[i];
			int y_new = y + y_dir[i];

			// 인접한 좌표가, 미로 내에 존재하는지, 방문한 적이 없는지, 이동이 가능한지 확인
			bool checkMove = (0 <= x_new && x_new < N) && (0 <= y_new && y_new < M)
				&& !visited[x_new][y_new] && maze[x_new][y_new] == 1;
			if (checkMove)
			{
				visited[x_new][y_new] = 1;              // 인접 좌표는 방문한 것으로 저장
				q.push(make_pair(x_new, y_new));        // 인접 좌표를 queue 에 삽입
				dist[x_new][y_new] = dist[x][y] + 1;    // 인접 좌표까지 이동한 거리 저장
			}
		}
	}
}

int main()
{
	Input();
	bfs(0, 0);
	cout << dist[N-1][M-1];
}
//#include "Util.h"

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int N, M;                       // 미로 크기
vector<vector<int>> storage;             // 미로 표현용 2차원 배열
vector<vector<int>> visited;             // 방문 기록용 2차원 배열
vector<vector<int>> dist;             // 이동칸 기록용 2차원 배열
int day;

int x_dir[4] = { -1, 1, 0, 0 };   // 상화좌우 x축 방향
int y_dir[4] = { 0, 0, -1, 1 };   // 상화좌우 y축 방향

queue<pair<int, int> > q;        // 탐색 좌표 저장용 queue

void Input()
{
	cin >> N >> M;                      // 미로 크기 입력

	storage.assign(M, vector<int>(N));
	visited.assign(M, vector<int>(N, 0));
	dist.assign(M, vector<int>(N, 0));

	int inputN;
	for (int i = 0; i < M; ++i)
	{
		for (size_t j = 0; j < N; j++)
		{
			cin >> inputN;
			storage[i][j] = inputN;
		}
	}
}

// 미로 경로 탐색
void bfs()
{
	//시작 지점 체크
	for (size_t y = 0; y < M; y++)
	{
		for (size_t x = 0; x < N; x++)
		{
			if (storage[y][x] == 1)
			{
				visited[y][x] = 1;          // 입력 받은 시작 좌표를 방문
				q.push(make_pair(y, x));     // queue 에 삽입
			}
		}
	}

	// 모든 좌표를 탐색할 때까지 반복
	while (!q.empty()) {

		// queue 의 front 좌표를, 현재 좌표로 지정
		int x = q.front().second;
		int y = q.front().first;

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
				&& !visited[y_new][x_new] && storage[y_new][x_new] == 0;
			if (checkMove)
			{
				storage[y_new][x_new] = 1;              // 인접 좌표는 방문한 것으로 저장

				q.push(make_pair(y_new, x_new));        // 인접 좌표를 queue 에 삽입
				dist[y_new][x_new] = dist[y][x] + 1;    // 인접 좌표까지 이동한 거리 저장
			}
		}
	}

	for (size_t y = 0; y < M; y++)
	{
		for (size_t x = 0; x < N; x++)
		{
			if (storage[y][x] == 0)
			{
				cout << -1;
				return;
			}
		}	
	}

	int mostMovement = 0;
	for (size_t y = 0; y < M; y++)
	{
		for (size_t x = 0; x < N; x++)
		{
			if (mostMovement < dist[y][x])
			{
				mostMovement = dist[y][x];
			}
		}
	}
	cout << mostMovement;
	return;
}

int main()
{
	Input();
	bfs();
}
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

int M, N, H;                       // 미로 크기
vector<vector<vector<int>>> storage;             // 미로 표현용 3차원 배열
vector<vector<vector<int>>> visited;             // 방문 기록용 2차원 배열
vector<vector<vector<int>>> dist;             // 이동칸 기록용 2차원 배열
int day;

int x_dir[6] = { -1, 1, 0, 0, 0, 0 };   // 상화좌우 x축 방향
int y_dir[6] = { 0, 0, -1, 1, 0, 0 };   // 상화좌우 y축 방향
int h_dir[6] = { 0, 0, 0, 0, -1, 1 };   // 상화좌우 y축 방향

queue<tuple<int, int, int>> q;        // 탐색 좌표 저장용 queue




void Input()
{
	cin >> M >> N >> H;                      // 미로 크기 입력

	storage.assign(H, vector<vector<int>>(N, vector<int>(M, 0)));
	visited.assign(H, vector<vector<int>>(N, vector<int>(M, 0)));
	dist.assign(H, vector<vector<int>>(N, vector<int>(M, 0)));


	for (size_t h = 0; h < H; ++h)
	{
		for (size_t y = 0; y < N; ++y)
		{
			for (size_t x = 0; x < M; x++)
			{
				int inputN;
				cin >> inputN;
				storage[h][y][x] = inputN;
			}
		}
	}

	//print(storage);
}

// 미로 경로 탐색
void bfs()
{
	//시작 지점 체크
	for (size_t h = 0; h < H; h++)
	{
		for (size_t y = 0; y < N; y++)
		{
			for (size_t x = 0; x < M; x++)
			{
				if (storage[h][y][x] == 1)
				{
					visited[h][y][x] = 1;          // 입력 받은 시작 좌표를 방문
					q.push(make_tuple(h, y, x));     // queue 에 삽입
				}
			}
		}
	}


	// 모든 좌표를 탐색할 때까지 반복
	while (!q.empty())
	{
		// queue 의 front 좌표를, 현재 좌표로 지정
		int h = get<0>(q.front());
		int y = get<1>(q.front());
		int x = get<2>(q.front());

		// qeueu 의 front 좌표 제거
		q.pop();

		// 현재 좌표와 상하좌우로 인접한 좌표 확인
		for (int i = 0; i < 6; ++i)
		{
			// 현재 좌표와 상하좌우로 인접한 좌표
			int x_new = x + x_dir[i];
			int y_new = y + y_dir[i];
			int h_new = h + h_dir[i];

			// 인접한 좌표가, 미로 내에 존재하는지, 방문한 적이 없는지, 이동이 가능한지 확인
			bool checkMove = (0 <= x_new && x_new < M) && (0 <= y_new && y_new < N) && ((0 <= h_new && h_new < H))
				&& !visited[h_new][y_new][x_new] && storage[h_new][y_new][x_new] == 0;
			if (checkMove)
			{
				storage[h_new][y_new][x_new] = 1;              // 인접 좌표는 방문한 것으로 저장
				visited[h_new][y_new][x_new] = 1;              
				q.push(make_tuple(h_new, y_new, x_new));        // 인접 좌표를 queue 에 삽입
				dist[h_new][y_new][x_new] = dist[h][y][x] + 1;    // 인접 좌표까지 이동한 거리 저장
			}
		}
	}

	for (size_t h = 0; h < H; h++)
	{
		for (size_t y = 0; y < N; y++)
		{
			for (size_t x = 0; x < M; x++)
			{
				if (storage[h][y][x] == 0)
				{
					cout << -1;
					return;
				}
			}
		}
	}

	int mostMovement = 0;
	for (size_t h = 0; h < H; h++)
	{
		for (size_t y = 0; y < N; y++)
		{
			for (size_t x = 0; x < M; x++)
			{
				if (mostMovement < dist[h][y][x])
				{
					mostMovement = dist[h][y][x];
				}
			}
		}
	}
	cout << mostMovement;

	//print(dist);
	return;
}

int main()
{
	Input();
	bfs();
}
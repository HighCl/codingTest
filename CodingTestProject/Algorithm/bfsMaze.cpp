///*
//문제
//https://www.acmicpc.net/problem/2178
//
//예제
//4 6
//101111
//101010
//101011
//111011
//
//결과
//15
//*/
//
//
//#include "Util.h"
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#define MAX 101
//
//using namespace std;
//
//int m, n;                       // 미로 크기 n = 가로, m = 세로
//vector<vector<int>> maze;		// 미로 표현용 3차원 배열
//vector<vector<int>> visited;    // 방문 기록용 2차원 배열
//vector<vector<int>> dist;       // 이동칸 기록용 2차원 배열
//
//int CAN_MOVE_TILE = 0;
//int x_dir[4] = { -1, 1, 0, 0 };   // 상화좌우 x축 방향
//int y_dir[4] = { 0, 0, -1, 1 };   // 상화좌우 y축 방향
//
//queue<pair<int, int> > q;        // 탐색 좌표 저장용 queue
//
//void Input()
//{
//	cin >> n >> m;                      // 미로 크기 입력 n = 가로, m = 세로
//
//	maze.assign(m, vector<int>(n));
//	visited.assign(m, vector<int>(n, 0));
//	dist.assign(m, vector<int>(n, 0));
//
//	for (int i = 0; i < m; ++i)
//	{
//		for (size_t j = 0; j < n; j++)
//		{
//			int inputN;
//			cin >> inputN;
//			maze[i][j] = inputN;
//		}
//	}
//}
//
//// 미로 경로 탐색
//void bfs(int start_x, int start_y)
//{
//	visited[start_y][start_x] = 1;          // 입력 받은 시작 좌표를 방문
//	q.push(make_pair(start_x, start_y));     // queue 에 삽입
//	dist[start_y][start_x]++;               // 시작 좌표까지 이동한 칸을 1로 지정
//
//	// 모든 좌표를 탐색할 때까지 반복
//	while (!q.empty())
//	{
//		// queue 의 front 좌표를, 현재 좌표로 지정
//		int x = q.front().first;
//		int y = q.front().second;
//
//		// qeueu 의 front 좌표 제거
//		q.pop();
//
//		// 현재 좌표와 상하좌우로 인접한 좌표 확인
//		for (int i = 0; i < 4; ++i)
//		{
//			// 현재 좌표와 상하좌우로 인접한 좌표
//			int x_new = x + x_dir[i];
//			int y_new = y + y_dir[i];
//			
//			bool CheckCanMove = (0 <= x_new && x_new < n) && (0 <= y_new && y_new < m);
//			if (!CheckCanMove) 
//				continue;
//
//			bool CheckVisit = visited[y_new][x_new];
//			if (CheckVisit)
//				continue;
//
//			bool CheckCanMoveTile = maze[y_new][x_new] == CAN_MOVE_TILE;
//			if (!CheckCanMoveTile)
//				continue;
//
//			visited[y_new][x_new] = 1;              // 인접 좌표는 방문한 것으로 저장
//			q.push(make_pair(x_new, y_new));        // 인접 좌표를 queue 에 삽입
//			dist[y_new][x_new] = dist[y][x] + 1;    // 인접 좌표까지 이동한 거리 저장
//		}
//		print(dist, false);
//	}
//}
//
//int main()
//{
//	Input();
//
//	bfs(0, 0);                          // 미로 탐색 시작
//	print(dist);
//	cout << dist[n - 1][m - 1];             // 도착 좌표까지의 거리 출력
//}
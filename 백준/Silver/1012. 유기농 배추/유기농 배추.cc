#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int N, M;                       // 미로 크기
vector<vector<int>> maze;             // 미로 표현용 2차원 배열
vector<vector<int>> visited;             // 방문 기록용 2차원 배열
vector<vector<int>> dist;             // 이동칸 기록용 2차원 배열
vector<int> 배추그룹;
vector<int> 출력;


int x_dir[4] = { -1, 1, 0, 0 };   // 상화좌우 x축 방향
int y_dir[4] = { 0, 0, -1, 1 };   // 상화좌우 y축 방향

queue<pair<int, int> > q;        // 탐색 좌표 저장용 queue

void Input()
{
	int 배추개수;
	cin >> N >> M >> 배추개수;                      // 미로 크기 입력

	maze.assign(N, vector<int>(M));
	visited.assign(N, vector<int>(M, 0));
	dist.assign(N, vector<int>(M, 0));
	배추그룹.clear();

	int x, y;
	for (int i = 0; i < 배추개수; ++i)
	{
		cin >> x >> y;
		maze[x][y] = 1;
		//cout << endl << i << endl;
	}
}

// 미로 경로 탐색
void bfs(int start_x, int start_y)
{
	vector<vector<int>> home좌표;

	visited[start_x][start_y] = 1;          // 입력 받은 시작 좌표를 방문
	home좌표.push_back(vector<int>{start_x, start_y });
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
				home좌표.push_back(vector<int>{x_new, y_new });
				q.push(make_pair(x_new, y_new));        // 인접 좌표를 queue 에 삽입
				dist[x_new][y_new] = dist[x][y] + 1;    // 인접 좌표까지 이동한 거리 저장
			}
		}
	}
	for (size_t i = 0; i < home좌표.size(); i++)
	{
		maze[home좌표[i][0]][home좌표[i][1]] = 0;
	}
	배추그룹.push_back(home좌표.size());
	//cout << home좌표.size()<<endl;
}

int main()
{
	int testCaseCnt;
	cin >> testCaseCnt;

	for (size_t i = 0; i < testCaseCnt; i++)
	{
		Input();

		for (size_t i = 0; i < N; i++)
		{
			for (size_t j = 0; j < M; j++)
			{
				if (maze[i][j] == 1)
				{
					//cout << i << " " << j << endl;
					bfs(i, j);                          // 미로 탐색 시작
				}
			}
		}

		출력.push_back(배추그룹.size());             // 도착 좌표까지의 거리 출력
	}

	for (size_t i = 0; i < 출력.size(); i++)
	{
		cout << 출력[i] << "\n";
	}
}
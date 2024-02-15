#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int vertices, edges;
vector<vector<int>> graph; // 인접 리스트
vector<bool> isVisited; // 정점 방문 여부 저장
int startNum;

//방문 순서
int 방문순서 = 0;
vector<int> 방문순서Vec;

void input() {
	cin >> vertices >> edges >> startNum;
	graph.assign(vertices, vector<int>(0, 0));
	isVisited.assign(vertices, false);
	방문순서Vec.assign(vertices, 0);

	for (int i = 0; i < edges; i++) {
		int s, e;
		cin >> s >> e;
		// 양방향 간선을 연결시킨다.
		graph[s - 1].emplace_back(e - 1);
		graph[e - 1].emplace_back(s - 1);
	}
}

void DFS(int cur) {
	isVisited[cur] = true;
	//cout << cur + 1 << "\n";
	방문순서Vec[cur] = ++방문순서;
	// 현재 정점과 간선으로 연결되어 있는 모든 정점들을 둘러본다.
	for (size_t i = 0; i < graph[cur].size(); i++) {
		int next = graph[cur][i];
		// 만일 방문하지 않았다면 매개변수로 전달하여 DFS를 재귀적으로 호출한다.
		if (!isVisited[next]) {
			DFS(next);
		}
	}
}

int main(void)
{
	input();
	for (size_t i = 0; i < graph.size(); i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}
	DFS(startNum - 1);

	auto arr = 방문순서Vec;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\n";
	}
	//cout << 0 << "\n";
}
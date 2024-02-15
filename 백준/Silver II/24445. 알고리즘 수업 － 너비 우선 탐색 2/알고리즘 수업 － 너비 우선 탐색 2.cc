//#include "Util.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int vertices, edges;
vector<vector<int>> graph;
vector<bool> isVisited;
int startNum;

int 방문횟수;
vector<int> 방문횟수Vec;

template <typename T>
void print(vector<T> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\n";
	}
}

void input() {
	cin >> vertices >> edges >> startNum;
	graph.assign(vertices, vector<int>(0, 0));
	isVisited.assign(vertices, false);
	방문횟수Vec.assign(vertices, 0);

	for (int i = 0; i < edges; i++) {
		int s, e;
		cin >> s >> e;
		// 양방향 간선을 연결시킨다.
		graph[s-1].emplace_back(e-1);
		graph[e-1].emplace_back(s-1);
	}
}

void BFS(int start) {
	queue<int> q;
	q.push(start);
	isVisited[start] = true;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		//cout << cur+1 << " ";
		방문횟수Vec[cur] = ++방문횟수;

		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (!isVisited[next]) {
				q.push(next);
				isVisited[next] = true;
			}
		}
	}
}

int main(void)
{
	input();
	for (size_t i = 0; i < graph.size(); i++)
	{
		sort(graph[i].begin(), graph[i].end(),greater<>());
	}
	BFS(startNum - 1);
	print(방문횟수Vec);
}
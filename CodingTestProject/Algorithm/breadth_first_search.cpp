//// 코드 참고 : https://m42-orion.tistory.com/64
///*
//예시 데이터
//5 5 3
//5 4
//5 2
//1 2
//3 4
//3 1
//
//결과: 3 1 4 2 5
//*/
//
//#include "Util.h"
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int vertices, edges;
//vector<vector<int>> graph; // 인접 리스트
//vector<bool> isVisited; // 정점 방문 여부 저장
//int startNum;
//
//void input() {
//	cin >> vertices >> edges >> startNum;
//	graph.assign(vertices, vector<int>(0, 0));
//	isVisited.assign(vertices, false);
//
//	for (int i = 0; i < edges; i++) {
//		int s, e;
//		cin >> s >> e;
//		// 양방향 간선을 연결시킨다.
//		graph[s-1].emplace_back(e-1);
//		graph[e-1].emplace_back(s-1);
//	}
//}
//
//void BFS(int start) {
//	queue<int> q;
//	q.push(start);
//	isVisited[start] = true;
//
//	while (!q.empty()) {
//		int cur = q.front();
//		q.pop();
//
//		cout << cur+1 << "\n";
//
//		for (int i = 0; i < graph[cur].size(); i++) {
//			int next = graph[cur][i];
//			if (!isVisited[next]) {
//				q.push(next);
//				isVisited[next] = true;
//			}
//		}
//	}
//}
//
//int main(void)
//{
//	input();
//	for (size_t i = 0; i < graph.size(); i++)
//	{
//		sort(graph[i].begin(), graph[i].end());
//	}
//	BFS(startNum - 1);
//}
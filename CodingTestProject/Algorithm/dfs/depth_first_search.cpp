////https://m42-orion.tistory.com/63
//
///*
//예시 데이터
//5 5 3
//5 4
//5 2
//1 2
//3 4
//3 1
// 
//결과: 3 1 2 5 4
//*/
//
//#include "Util.h"
//#include <algorithm>
//#include <cassert>
//#include <iostream>
//#include <list>
//#include <map>
//#include <queue>
//#include <string>
//#include <vector>
//using namespace std;
//
//int vertices, edges;
//vector<vector<size_t>> graph; // 인접 리스트
//vector<bool> isVisited; // 정점 방문 여부 저장
//int startNum;
//
//void input() {
//	cin >> vertices >> edges >> startNum;
//	// 메모리 공간 할당 및 초기화
//	int tempNum = vertices;
//	graph.assign(tempNum, vector<size_t>(0, 0));
//	isVisited.assign(tempNum, false);
//
//	for (int i = 0; i < edges; i++) {
//		int s, e;
//		cin >> s >> e;
//		// 양방향 간선을 연결시킨다.
//		graph[s - 1].emplace_back(e - 1);
//		graph[e - 1].emplace_back(s - 1);
//	}
//}
//
//void DFS(int cur) {
//	isVisited[cur] = true;
//	cout << cur + 1 << " ";
//
//	// 현재 정점과 간선으로 연결되어 있는 모든 정점들을 둘러본다.
//	for (size_t i = 0; i < graph[cur].size(); i++) 
// {
//		int next = graph[cur][i];
//		// 만일 방문하지 않았다면 매개변수로 전달하여 DFS를 재귀적으로 호출한다.
//		if (!isVisited[next]) 
//			DFS(next);
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
//	DFS(startNum-1);
//}
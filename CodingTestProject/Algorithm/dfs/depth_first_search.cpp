////https://m42-orion.tistory.com/63
//
///*
//���� ������
//5 5 3
//5 4
//5 2
//1 2
//3 4
//3 1
// 
//���: 3 1 2 5 4
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
//vector<vector<size_t>> graph; // ���� ����Ʈ
//vector<bool> isVisited; // ���� �湮 ���� ����
//int startNum;
//
//void input() {
//	cin >> vertices >> edges >> startNum;
//	// �޸� ���� �Ҵ� �� �ʱ�ȭ
//	int tempNum = vertices;
//	graph.assign(tempNum, vector<size_t>(0, 0));
//	isVisited.assign(tempNum, false);
//
//	for (int i = 0; i < edges; i++) {
//		int s, e;
//		cin >> s >> e;
//		// ����� ������ �����Ų��.
//		graph[s - 1].emplace_back(e - 1);
//		graph[e - 1].emplace_back(s - 1);
//	}
//}
//
//void DFS(int cur) {
//	isVisited[cur] = true;
//	cout << cur + 1 << " ";
//
//	// ���� ������ �������� ����Ǿ� �ִ� ��� �������� �ѷ�����.
//	for (size_t i = 0; i < graph[cur].size(); i++) 
// {
//		int next = graph[cur][i];
//		// ���� �湮���� �ʾҴٸ� �Ű������� �����Ͽ� DFS�� ��������� ȣ���Ѵ�.
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
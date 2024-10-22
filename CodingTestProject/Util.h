//#include "Util.h"

#include <bits/stdc++.h>
using namespace std;

#pragma region PrintFunction
const int TAB_CNT = 3;

#pragma region Operator
template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
	os << "(" << p.first << ", " << p.second << ")";
	return os;
}
#pragma endregion
#pragma region Default Print
template <typename T>
void print(T variable)
{
	cout << "-----------------" << "\n";
	cout << "일반 출력" << "\n";
	cout << variable << " ";
	cout << "\n" << "-----------------" << "\n\n";
}

template <typename T>
void print(T t, string printName)
{
	cout << printName << ": ";
	cout << "\n";
	print(t);
}
#pragma endregion

#pragma region Array 종류
//일반 배열, 포인터 배열 둘 다 적용됨
template <typename T>
void print(T* arr, int sizeX, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "1차원 배열 출력" << "\n";
	for (int i = 0; i < sizeX; i++)
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << arr[i];
		}
		else
		{
			cout << " " << arr[i];
		}
	}
	cout << "\n" << "-----------------" << "\n\n";
}

//TODO: 2차원 배열은 따로 만들어줘야 함. 왜지?
template <typename T>
void print(T arr[], int sizeX, int sizeY, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "2차원 배열 출력" << "\n";
	for (int i = 0; i < sizeY; ++i)
	{
		for (size_t j = 0; j < sizeX; j++)
		{
			if (isTab)
			{
				cout.width(TAB_CNT);
				cout << arr[i][j];
			}
			else
			{
				cout << " " << arr[i][j];
			}
		}
		cout << "\n";
	}
	cout << "-----------------" << "\n\n";
}

template <typename T>
void print(T** arr, int sizeX, int sizeY, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "2차원 배열 출력" << "\n";
	for (size_t i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
		{
			if (isTab)
			{
				cout.width(TAB_CNT);
				cout << arr[i][j];
			}
			else
			{
				cout << " " << arr[i][j];
			}
		}
		cout << "\n";
	}
	cout << "-----------------" << "\n\n";
}
#pragma endregion
#pragma region List
template <typename T>
void print(list<T> li)
{
	cout << "-----------------" << "\n";
	cout << "1차원 리스트 출력" << "\n";
	for (auto iter = li.begin(); iter != li.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "\n" << "-----------------" << "\n\n";
}
#pragma endregion
#pragma region Map
template<typename T1, typename T2>
void print(std::map<T1, T2> map, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "map 출력" << "\n";
	typename std::map<T1, T2>::iterator itr;
	for (itr = map.begin(); itr != map.end(); ++itr)
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << itr->first << " ";
			cout.width(TAB_CNT);
			cout << itr->second << "\n";
		}
		else
		{
			cout << " " << itr->first << " " << itr->second << "\n";
		}
	}
	cout << "\n" << "-----------------" << "\n\n";
}
#pragma endregion
#pragma region queue 종류
template <typename T>
void print(queue<T> q, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "queue 출력" << "\n";
	auto tempQue = q;
	while (!tempQue.empty())
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << tempQue.front();
		}
		else
		{
			cout << " " << tempQue.front();
		}
		tempQue.pop();
	}
	cout << "\n" << "-----------------" << "\n\n";
}

template <typename T>
void print(deque<T> dq, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "deque 출력" << "\n";
	deque<T> tempDeQue = dq;
	cout << "front" << " ";
	while (!tempDeQue.empty())
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << tempDeQue.front();
		}
		else
		{
			cout << " " << tempDeQue.front();
		}
		tempDeQue.pop_front();
	}
	cout << " back" << " ";
	cout << "\n" << "-----------------" << "\n\n";
}

template <typename T>
void print(priority_queue<T> pq, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "priority_queue 출력" << "\n";
	auto tempPQ = pq;
	while (!tempPQ.empty())
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << tempPQ.top();
		}
		else
		{
			cout << " " << tempPQ.top();
		}
		tempPQ.pop();
	}
	cout << "\n" << "-----------------" << "\n\n";
}

template <typename T>
void print(priority_queue<T, vector<T>, greater<T>> pq, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "priority_queue greater 출력" << "\n";
	auto tempPQ = pq;
	while (!tempPQ.empty())
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << tempPQ.top();
		}
		else
		{
			cout << " " << tempPQ.top();
		}
		tempPQ.pop();
	}
	cout << "\n" << "-----------------" << "\n\n";
}
#pragma endregion
#pragma region Stack
template <typename T>
void print(stack<T> stack, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "stack 출력" << "\n";
	auto tempStack = stack;
	while (!tempStack.empty())
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << tempStack.top();
		}
		else
		{
			cout << " " << tempStack.top();
		}
		tempStack.pop();
	}
	cout << "\n" << "-----------------" << "\n\n";
}
#pragma endregion
#pragma region Set 종류
template <typename T>
void print(set<T> s, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "set 출력" << "\n";
	for (auto elem : s)
	{
		if (isTab)
		{
			cout.width(TAB_CNT); // width를 이용해 출력 폭을 설정
			cout << elem;
		}
		else
		{
			cout << " " << elem;
		}
	}
	cout << "\n" << "-----------------" << "\n\n";
}

template <typename T>
void print(multiset<T> multi_set, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "multiset 출력" << "\n";
	for (auto elem : multi_set)
	{
		if (isTab)
		{
			cout.width(TAB_CNT); // width를 이용해 출력 폭을 설정
			cout << elem;
		}
		else
		{
			cout << " " << elem;
		}
	}
	cout << "\n" << "-----------------" << "\n\n";
}
#pragma endregion
#pragma region Vector 종류
template <typename T>
void print(vector<T> arr, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "vector 출력" << "\n";
	for (int i = 0; i < arr.size(); i++)
	{
		if (isTab)
		{
			cout.width(TAB_CNT);
			cout << arr[i];
		}
		else
		{
			cout << " " << arr[i];
		}
	}
	cout << "\n" << "-----------------" << "\n\n";
}

template <typename T>
void print(vector<vector<T>> v, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "이중 vector 출력" << "\n";
	cout << "size: " << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
	{
		//cout << "v["<<i<<"] size: " << v[i].size() << " | ";
		cout << i << ":";
		for (int j = 0; j < v[i].size(); j++)
		{
			if (isTab)
			{
				cout.width(TAB_CNT);
				cout << v[i][j];
			}
			else
			{
				cout << " " << v[i][j];
			}
		}
		cout << "\n";
	}
	cout << "-----------------" << "\n\n";
}

template<typename T>
void print(const vector<vector<vector<T>>>& v, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "3차원 Vector 출력" << "\n";
	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << i << "층" << "\n";
		for (size_t j = 0; j < v[i].size(); ++j)
		{
			for (size_t k = 0; k < v[i][j].size(); ++k)
			{
				if (isTab)
				{
					cout.width(TAB_CNT);
					cout << v[i][j][k];
				}
				else
				{
					cout << " " << v[i][j][k];
				}
			}
			cout << "\n";  // 각 차원마다 줄 바꿈
		}
		cout << "\n";  // 각 차원 사이에 빈 줄 추가
	}
	cout << "-----------------" << "\n\n";
}
#pragma endregion
#pragma endregion

#pragma region Delete
//벡터 배열을 사용할거면 벡터를 사용할 이유가 없음. 삭제
/// <summary>
/// size: sizeof(graph) / sizeof(graph[0])
/// </summary>
//template <typename T>
//void print(vector<T> vArr[], size_t size)
//{
//	cout << "-----------------" << "\n";
//	cout << "vector 배열 출력" << "\n";
//
//	for (int i = 0; i < size; ++i)
//	{
//		if (!vArr[i].empty()) { // 해당 노드에 연결된 노드가 있는 경우에만 출력
//			cout << "Node " << i << " connected to nodes: ";
//			for (int j = 0; j < vArr[i].size(); ++j)
//			{
//				cout << vArr[i][j] << " ";
//			}
//			cout << "\n";
//		}
//	}
//	cout << "-----------------" << "\n\n";
//}
#pragma endregion

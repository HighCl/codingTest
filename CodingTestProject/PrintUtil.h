#include <bits/stdc++.h>
using namespace std;

const bool IS_TAB = true;
const int TAB_CNT = 3;

#pragma region Define Function

template <typename T>
void print(T variable);
template <typename T>
void print(T t, string printName);

#pragma endregion

#pragma region Print - Operator

template<typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
	os << "(" << p.first << ", " << p.second << ")";
	return os;
}

#pragma endregion
#pragma region Print - Normal Type

template <typename T>
void printData(T variable)
{
	cout << "-----------------" << "\n";
	cout << "일반 출력" << "\n";
	cout << variable << " ";
	cout << "\n" << "-----------------" << "\n\n";
}

#pragma endregion
#pragma region Print - Array Type

//일반 배열, 포인터 배열 둘 다 적용됨
template <typename T>
void printData(T* arr, int sizeX, bool isTab = true)
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

template <typename T>
void printData(T arr[], int sizeX, int sizeY, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "2차원 배열 출력" << "\n";
	for (size_t y = 0; y < sizeY; ++y)
	{
		for (size_t x = 0; x < sizeX; x++)
		{
			if (isTab)
			{
				cout.width(TAB_CNT);
				cout << arr[x][y];
			}
			else
			{
				cout << " " << arr[x][y];
			}
		}
		cout << "\n";
	}
	cout << "-----------------" << "\n\n";
}

////일반 배열, 포인터 배열 둘 다 적용됨
//template <typename T>
//void printData(T* arr, int sizeX, bool isTab = true)
//{
//	cout << "-----------------" << "\n";
//	cout << "1차원 배열 출력" << "\n";
//	for (int i = 0; i < sizeX; i++)
//	{
//		if (isTab)
//		{
//			cout.width(TAB_CNT);
//			cout << arr[i];
//		}
//		else
//		{
//			cout << " " << arr[i];
//		}
//	}
//	cout << "\n" << "-----------------" << "\n\n";
//}
//
//template <typename T>
//void printData(T** arr, int sizeX, int sizeY, bool isTab = true)
//{
//	cout << "-----------------" << "\n";
//	cout << "2차원 배열 출력" << "\n";
//	for (size_t y = 0; y < sizeY; y++)
//	{
//		for (size_t x = 0; x < sizeX; x++)
//		{
//			if (isTab)
//			{
//				cout.width(TAB_CNT);
//				cout << arr[x][y];
//			}
//			else
//			{
//				cout << " " << arr[x][y];
//			}
//		}
//		cout << "\n";
//	}
//	cout << "-----------------" << "\n\n";
//}

#pragma endregion
#pragma region Print - List Type

template <typename T>
void printData(list<T> li)
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
#pragma region Print - Stack Type

template <typename T>
void printData(stack<T> stack, bool isTab = true)
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
#pragma region Print - Set Type

template <typename T>
void printData(set<T> s, bool isTab = true)
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
void printData(multiset<T> multi_set, bool isTab = true)
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
#pragma region Print - Vector Type

template <typename T>
void printData(vector<T> vec)
{
	cout << "-----------------" << "\n";
	cout << "vector 출력" << "\n";
	for (int i = 0; i < vec.size(); i++)
	{
		if (IS_TAB)
		{
			cout.width(TAB_CNT);
			cout << vec[i];
		}
		else
		{
			cout << " " << vec[i];
		}
	}
	cout << "\n" << "-----------------" << "\n\n";
}

template <typename T>
void printData(vector<vector<T>> vec2)
{
	cout << "-----------------" << "\n";
	cout << "이중 vector 출력" << "\n";
	cout << "size: " << vec2.size() << "\n";
	for (int x = 0; x < vec2.size(); x++)
	{
		//cout << "v["<<i<<"] size: " << v[i].size() << " | ";
		cout << x << ":";
		for (int y = 0; y < vec2[x].size(); y++)
		{
			if (IS_TAB)
			{
				cout.width(TAB_CNT);
				cout << vec2[x][y];
			}
			else
			{
				cout << " " << vec2[x][y];
			}
		}
		cout << "\n";
	}
	cout << "-----------------" << "\n\n";
}

template<typename T>
void printData(const vector<vector<vector<T>>>& v, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "3차원 Vector 출력" << "\n";
	for (size_t x = 0; x < v.size(); ++x)
	{
		cout << x << "층" << "\n";
		for (size_t y = 0; y < v[x].size(); ++y)
		{
			for (size_t z = 0; z < v[x][y].size(); ++z)
			{
				if (isTab)
				{
					cout.width(TAB_CNT);
					cout << v[x][y][z];
				}
				else
				{
					cout << " " << v[x][y][z];
				}
			}
			cout << "\n";  // 각 차원마다 줄 바꿈
		}
		cout << "\n";  // 각 차원 사이에 빈 줄 추가
	}
	cout << "-----------------" << "\n\n";
}

#pragma endregion
#pragma region Print - Queue Type

template <typename T>
void printData(queue<T> q, bool isTab = true)
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
void printData(deque<T> dq, bool isTab = true)
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
void printData(priority_queue<T> pq, bool isTab = true)
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
void printData(priority_queue<T, vector<T>, greater<T>> pq, bool isTab = true)
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
#pragma region Print - Map Type

template<typename T1, typename T2>
void printData(std::map<T1, T2> map, bool isTab = true)
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

template<typename T1, typename T2>
void printData(std::unordered_map<T1, T2> map, bool isTab = true)
{
	cout << "-----------------" << "\n";
	cout << "unordered_map 출력" << "\n";
	typename std::unordered_map<T1, T2>::iterator itr;
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

#pragma region Default Print

template <typename T>
void print(T t, string printName)
{
	cout << "[" << printName << "]";
	cout << "\n";
	print(t);
}

template <typename T>
void print(T variable)
{
	printData(variable);
}

#pragma endregion




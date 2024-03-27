#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <set>
using namespace std;

int num, k;
queue<int> personQueue;

void Input()
{
	//데이터 개수
	cin >> num;
	cin >> k;

	for (size_t i = 0; i < num; i++)
	{
		personQueue.push(i + 1);
	}
}

void Logic()
{
	cout << "<";
	int cnt = 0;

	while (personQueue.size() != 1)
	{
		if (++cnt != k)
		{
			int num = personQueue.front();
			personQueue.push(num);
			personQueue.pop();
		}
		else
		{
			cout << personQueue.front()<<", ";
			personQueue.pop();
			cnt = 0;
		}
	}
	cout << personQueue.front();
	cout << ">";

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Logic();
}
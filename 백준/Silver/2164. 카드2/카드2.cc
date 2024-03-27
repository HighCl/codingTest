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

int cardCnt;
queue<int> cardQueue;

void Input()
{
	//데이터 개수
	cin >> cardCnt;

	for (size_t i = 0; i < cardCnt; i++)
	{
		cardQueue.push(i + 1);
	}
}

void Logic()
{
	while (cardQueue.size() != 1)
	{
		cardQueue.pop();
		int num = cardQueue.front();
		cardQueue.push(num);
		cardQueue.pop();
	}

	cout << cardQueue.front();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Logic();
}
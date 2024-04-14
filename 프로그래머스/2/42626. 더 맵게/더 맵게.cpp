#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int solution(vector<int> scoville, int K)
{
	for (size_t i = 0; i < scoville.size(); i++)
	{
		pq.push(scoville[i]);
	}

	int repeatCnt = 0;
	while (pq.top() < K)
	{
		if (pq.size() == 1)
		{
			repeatCnt = -1;
			break;
		}

		repeatCnt++;
		int food1 = pq.top();
		pq.pop();
		int food2 = pq.top();
		pq.pop();

		int mix = food1 + food2 * 2;
		pq.push(mix);
	}

	return repeatCnt;
}
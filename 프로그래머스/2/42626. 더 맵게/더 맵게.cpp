#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

multiset<int> scovilleSet;

int solution(vector<int> scoville, int K)
{
	for (auto var : scoville)
	{
		scovilleSet.insert(var);
	}

	int repeatCnt = 0;
	while (*scovilleSet.begin() < K)
	{
		if (scovilleSet.size() == 1)
		{
			repeatCnt = -1;
			break;
		}

		repeatCnt++;
		int food1 = *scovilleSet.begin();
		scovilleSet.erase(scovilleSet.begin());
		int food2 = *scovilleSet.begin();
		scovilleSet.erase(scovilleSet.begin());

		int mix = food1 + food2 * 2;
		scovilleSet.insert(mix);
	}

	return repeatCnt;
}
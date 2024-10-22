#include "Util.h"

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

int main()
{
	vector<int> scoville = { 1, 5, 3, 9, 10, 12 };
	int k = 7;

	print(solution(scoville, k));

	//Set을 이용하여 풀어보자
}
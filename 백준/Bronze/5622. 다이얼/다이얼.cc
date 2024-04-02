#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <stack>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <list>
#include <set>
using namespace std;

void Logic()
{
}

void Input()
{
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::cout.tie(NULL);

	map<char, int> numMap;

	//numMap 초기화
	int dialCnt = 0;
	int initDialNum = 2;
	for (size_t i = 0; i < 26; i++)
	{
		dialCnt++;
		numMap[65 + i] = initDialNum;

		if (65 + i == 'P' || 65 + i == 'W')
			dialCnt--;

		if (dialCnt >= 3)
		{
			dialCnt = 0;
			initDialNum++;
		}
	}

	string str;
	int totalTime = 0;

	cin >> str;
	for (size_t i = 0; i < str.size(); i++)
	{
		char target = str[i];
		int dialNum = numMap[target];
		totalTime = totalTime + dialNum + 1;
	}
	cout << totalTime;
}
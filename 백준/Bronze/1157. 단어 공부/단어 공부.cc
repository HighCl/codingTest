#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <list>
#include <set>
using namespace std;

string str;
vector<int> alphabatCntGroup;

void Init()
{
	alphabatCntGroup.assign(26, 0);
}

void Input()
{
	cin >> str;
}

void MakeOrGetBig(int& cNum)
{
	if (92 <= cNum && cNum <= 122)
		cNum -= 32;
}

int main()
{
	Init();
	Input();

	for (int num : str)
	{
		MakeOrGetBig(num);
		alphabatCntGroup[num - 65]++;
	}

	//print(alphabatCntGroup);
	int max = *max_element(alphabatCntGroup.begin(), alphabatCntGroup.end());
	//print(max);

	bool isDuplication = false;
	int maxCnt = 0;
	for (int n : alphabatCntGroup)
	{
		if (n == max)
		{
			maxCnt++;
			if (maxCnt == 2)
			{
				isDuplication = true;
				break;
			}
		}
	}

	if (isDuplication)
		cout << "?";
	else
		cout << (char)(find(alphabatCntGroup.begin(),alphabatCntGroup.end(), max) - alphabatCntGroup.begin() + 65);

	return 0;
}
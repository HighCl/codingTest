#include <iostream>
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

	string str;
	int blankCnt = 0;
	getline(cin, str);

	if (str.length() == 0)
	{
		cout << 0;
		return 0;
	}

	if (str.length() == 1 && str[0] == ' ')
	{
		cout << 0;
		return 0;
	}

	auto firstIter = str.begin() + str.find_first_not_of(" ");
	auto endIter = str.begin() + str.find_last_not_of(" ") + 1;
	for (; firstIter != endIter; firstIter++)
	{
		if (*firstIter == ' ')
			blankCnt++;
	}
	cout << blankCnt + 1;

	//blankCnt = 0;
	//for (size_t i = str.find_first_not_of(" "); i < str.find_last_not_of(' ') + 1; i++)
	//{
	//	if (str[i] == ' ')
	//		blankCnt++;
	//}
	//cout << blankCnt + 1;
}
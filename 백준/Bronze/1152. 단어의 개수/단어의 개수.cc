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
	std::getline(cin, str);

	if (str.length() == 1 && str[0] == ' ')
	{
		cout << 0;
		return 0;
	}

	while (str[0] == ' ')
	{
		str.erase(0, 1);
	}
	while (str[str.length() - 1] == ' ')
	{
		str.erase(str.length() - 1, 1);
	}

	int blankCnt = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			blankCnt++;
		}
	}

	cout << blankCnt + 1;
}
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

	int testCnt;
	int repeatCnt;
	string str;

	cin >> testCnt;
	for (size_t i = 0; i < testCnt; i++)
	{
		cin >> repeatCnt;
		cin >> str;

		for (size_t i = 0; i < str.size(); i++)
		{
			for (size_t j = 0; j < repeatCnt; j++)
			{
				cout << str[i];
			}
		}
		cout << endl;
	}
}
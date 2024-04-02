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

	int numCnt;
	string str;

	int sumResult = 0;

	cin >> numCnt;
	cin >> str;
	for (size_t i = 0; i < str.length(); i++)
	{
		sumResult += (int)str[i] - 48;
	}

	cout << sumResult << "\n";
}
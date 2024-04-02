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

	map<char, int> map;
	string alphabat = "abcdefghijklmnopqrstuvwxyz";

	for (size_t i = 0; i < alphabat.size(); i++)
	{
		map[alphabat[i]] = -1;
	}


	string str;
	cin >> str;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (map[str[i]] == -1)
			map[str[i]] = i;
	}


	std::map<char, int>::iterator itr;
	for (itr = map.begin(); itr != map.end(); ++itr)
	{
		cout << itr->second << " ";
	}
}
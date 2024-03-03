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

int wordNum = 5;
vector<string> strVec {"but", "i", "wont", "more", "an"};

void Input()
{
	strVec.clear();

	cin >> wordNum;
	for (size_t i = 0; i < wordNum; i++)
	{
		string str;
		cin >> str;
		auto iter = find(strVec.begin(), strVec.end(), str);
		if (iter == strVec.end())
			strVec.push_back(str);
	}
}

//i = 앞에 올 값 
//j = 뒤에 올 값
//True 반환 = 앞에?

//길이순 정렬
bool Comp(string i, string j)
{
	if (i.size() == j.size())
	{
		for (size_t n = 0; n < i.size(); n++)
		{
			if (i[n] == j[n])
				continue;

			return i[n] < j[n];
		}
	}

	return i.size() < j.size();
}

void Logic()
{
	sort(strVec.begin(), strVec.end(), Comp);
	for (size_t i = 0; i < strVec.size(); i++)
	{
		cout << strVec[i] << "\n";
	}
}

int main()
{
	Input();
	Logic();
}
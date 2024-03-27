#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <set>
using namespace std;

int dataCnt;
vector<string> strVec;

void Input()
{
	//데이터 개수
	cin >> dataCnt;
	strVec.clear();
	//큐 or 스택
	for (size_t i = 0; i < dataCnt; i++)
	{
		string str;
		cin >> str;
		strVec.push_back(str);
	}
}

void Logic(string s)
{
	stack<char> stack;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			stack.push(s[i]);

		if (s[i] == ')')
		{
			if (stack.empty() || stack.top() != '(')
			{
				cout << "NO" << endl;
				return;
			}
			else
				stack.pop();
		}
	}

	if (!stack.empty())
	{
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	for (size_t i = 0; i < dataCnt; i++)
	{
		Logic(strVec[i]);
	}
}
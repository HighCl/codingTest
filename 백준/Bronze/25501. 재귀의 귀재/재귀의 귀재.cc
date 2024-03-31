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

int testCnt;
int recursiveCnt = 0;

int recursion(const char* s, int l, int r)
{
	recursiveCnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s)
{
	return recursion(s, 0, strlen(s) - 1);
}

void Logic(const char* str)
{
	recursiveCnt = 0;
	bool isPalind = isPalindrome(str);
	cout << isPalind << " " << recursiveCnt << "\n";
}

void Input()
{
	cin >> testCnt;

	char str[1001];
	for (size_t i = 0; i < testCnt; i++)
	{
		cin.ignore();
		cin >> str;
		Logic(str);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
}
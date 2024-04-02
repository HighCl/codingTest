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

	string str1, str2;
	cin >> str1;
	cin >> str2;

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int num1 = stoi(str1);
	int num2 = stoi(str2);

	if (num1 < num2)
	{
		cout << num2;
	}
	else
	{
		cout << num1;
	}
}
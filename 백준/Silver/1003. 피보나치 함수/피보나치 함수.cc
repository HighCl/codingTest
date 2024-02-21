#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;

const int CNT = 1000;
long long dp[CNT];
int testCase, inputN;


void Input()
{
	cin >> inputN;
}

int fibonacci(int n)
{
	if (n == 0)
	{
		dp[n] = 0;
		return 0;
	}
	if (n == 1)
	{
		dp[n] = 1;
		return 1;
	}

	if (dp[n] != -1)
		return dp[n];

	dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return dp[n];
}

int main()
{
	vector<pair<int, int>> 출력값;
	std::fill_n(dp, CNT, -1);

	cin >> testCase;
	for (size_t i = 0; i < testCase; i++)
	{
		Input();
		fibonacci(inputN);

		if (inputN == 0)
			출력값.push_back(make_pair(1, 0));
		else if (inputN == 1)
			출력값.push_back(make_pair(0, 1));
		else
		{
			출력값.push_back(make_pair(dp[inputN - 1], dp[inputN]));
		}
	}

	for (size_t i = 0; i < 출력값.size(); i++)
	{
		cout << 출력값[i].first << " " << 출력값[i].second << "\n";
	}
}
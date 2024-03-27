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

long fibonacciNum;

long long Fibonacci(long long n)
{
	if (n == 0)
		return 0;

	if (n == 1)
		return 1;

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void Input()
{
	cin >> fibonacciNum;
}

void Logic()
{
	cout << Fibonacci(fibonacciNum);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Logic();
}
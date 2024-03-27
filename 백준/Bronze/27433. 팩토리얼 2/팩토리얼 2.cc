#include <iostream>
using namespace std;

long factorialNum;

long long Factorial(long long n)
{
	if (n == 0)
		return 1;

	if (n == 1)
		return 1;

	return n * Factorial(n - 1);
}

void Input()
{
	cin >> factorialNum;
}

void Logic()
{
	long long n = Factorial(factorialNum);
	cout << n;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Logic();
}
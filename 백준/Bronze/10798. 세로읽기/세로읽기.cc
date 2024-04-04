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

	string a, b, c, d, e, result;

	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	getline(cin, d);
	getline(cin, e);

	a.resize(15);
	b.resize(15);
	c.resize(15);
	d.resize(15);
	e.resize(15);

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	reverse(c.begin(), c.end());
	reverse(d.begin(), d.end());
	reverse(e.begin(), e.end());

	for (size_t i = 0; i < 15; i++)
	{
		result += e[i];
		result += d[i];
		result += c[i];
		result += b[i];
		result += a[i];
	}

	reverse(result.begin(), result.end());
	for (size_t i = 0; i < result.size(); i++)
	{
		if (result[i] != '\0')
			cout << result[i];
	}
	return 0;
}
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

int 격자판[9][9];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::cout.tie(NULL);

	int bestNum = -1;
	int bestNumRow = 0;
	int bestNumCol = 0;
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			cin >> 격자판[i][j];
			if (격자판[i][j] > bestNum)
			{
				bestNum = 격자판[i][j];
				bestNumRow = i + 1;
				bestNumCol = j + 1;
			}
		}
	}

	cout << bestNum << "\n";
	cout << bestNumRow << " " << bestNumCol;

	return 0;
}
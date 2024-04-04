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

int 도화지[100][100];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	std::cout.tie(NULL);

	int paperCnt;
	int row, col;
	for (size_t i = 0; i < 100; i++)
	{
		fill_n(도화지[i], 10, 0);
	}

	cin >> paperCnt;
	for (size_t i = 0; i < paperCnt; i++)
	{
		cin >> row >> col;

		for (size_t j = 0; j < 10; j++)
		{
			for (size_t k = 0; k < 10; k++)
			{
				도화지[row + j][col + k]++;
			}
		}
	}
	
	int area = 0;
	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 100; j++)
		{
			if (도화지[i][j] >= 1)
				area++;
		}
	}
	cout << area;

	return 0;
}
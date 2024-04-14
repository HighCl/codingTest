#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> pq;
	//입력
	cin >> n;

	int repeatCnt = n * n;
	int pqCnt = 0;
	int temp;
	for (int i = 0; i < repeatCnt; i++)
	{
		cin >> temp;
		pq.push(temp);
		pqCnt++;

		if (pqCnt > n)
		{
			pq.pop();
		}
	}

	cout << pq.top();
}
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2250000];
int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//입력
	cin >> n;

	int repeatCnt = n * n;
	for (int i = 0; i < repeatCnt; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n * n);
	cout << arr[n * n - n] << endl;
}
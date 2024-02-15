#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int cnt;
vector<vector<int>> 평면좌표;

void input() {
	cin >> cnt;
	int n, m;
	for (size_t i = 0; i < cnt; i++)
	{
		cin >> n >> m;
		vector<int> tempVec;
		tempVec.push_back(n);
		tempVec.push_back(m);
		평면좌표.push_back(tempVec);
	}
}

template <typename T>
void print(vector<vector<T>> v)
{
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
}

bool compare(vector<int> i, vector<int> j)
{
	if (i[0] < j[0])
	{
		return true;
	}

	if (i[0] == j[0]) //x축 동일하면
	{
		if (i[1] < j[1])//y축 비교
			return true;
	}

	return false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	sort(평면좌표.begin(), 평면좌표.end(), compare);
	print(평면좌표);
}
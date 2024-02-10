#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> v;
int n;
int m;

int 같은수확인(int n1, int n2)
{
	cout << n1 << " " << n2 << endl;

	if (n1 == n2)
		return n1;
	else
		return 0;
}

bool areAllEqual(const std::vector<int>& numbers) {
	if (numbers.empty()) {
		return true; // 빈 벡터의 경우 모든 요소가 같다고 간주합니다.
	}

	int firstNumber = numbers[0];
	// std::all_of 함수를 사용하여 벡터의 모든 요소가 첫 번째 요소와 같은지 확인합니다.
	return std::all_of(numbers.begin() + 1, numbers.end(), [firstNumber](int num) {
		return num == firstNumber;
		});
}

int FindNum()
{
	int lowNum = n < m ? n : m;
	for (int i = lowNum; i > 1; i--)
	{
		//cout << "lowNum - i: " << lowNum - i << endl;
		//cout << "i: " << i << endl;
		for (int j = 0; j <= n - i; j++) //행
		{
			for (int k = 0; k <= m - i; k++) //열
			{
				vector<int> numbers;
				int n1 = v[j][k];
				int n2 = v[j][k + i - 1];
				int n3 = v[j + i - 1][k];
				int n4 = v[j + i - 1][k + i - 1];
				numbers.push_back(n1);
				numbers.push_back(n2);
				numbers.push_back(n3);
				numbers.push_back(n4);
				//cout << n1 <<endl;
				//cout << n2 <<endl;
				//cout << n3 <<endl;
				//cout << n4 <<endl;
				//cout << endl<<endl;

				if (areAllEqual(numbers)) {
					//std::cout << "모든 수가 같습니다." << std::endl;
					return i * i;
				}
				else {
					//std::cout << "모든 수가 같지 않습니다." << std::endl;
				}
				//cout << "B" << endl;	
			}
		}
	}

	return 1;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	n = 2;
	m = 3;

	cin >> n;
	cin >> m;
	//cout << "GetN:"<<n << endl << endl;
	//cout << "GetM:"<<m  << endl << endl;

	for (int i = 0; i < n; i++)
	{
		vector<int> tempVec;
		v.push_back(tempVec);
	}

	for (int i = 0; i < n; i++)
	{
		string getStr;
		cin >> getStr;

		for (int j = 0; j < getStr.size(); j++)
		{
			int tempNum = getStr[j] - 48;
			//cout << tempNum << " ";
			v[i].push_back(tempNum);
		}
		//cout << "\n";
	}

	//for (int i = 0; i < v.size(); i++)
	//{
	//	for (int j = 0; j < v[i].size(); j++)
	//	{
	//		cout << v[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	cout << FindNum();

	return 0;
}
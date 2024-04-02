#include <iostream>
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


	int testCnt;
	cin >> testCnt;
	for (size_t i = 0; i < testCnt; i++)
	{
		string str;

		//평범하게 문자열을 받아오는 방법(공백있으면 이용 불가능)
		cin >> str;
		
		//라인 형태로 받아오는 방법
		//cin.ignore();
		//getline(cin, str);
		
		//print(str);

		//값 그대로 출력하는 방법 있음
		//cout << str.front() << str.back()<< "\n";

		//iterator로 출력하는 방법 있음
		cout << *str.begin() << *(str.end()-1) << "\n";
	}
}
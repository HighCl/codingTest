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
#include <sstream> // 이제 프로그램 내에서 stringstream을 사용할 수 있습니다.
using namespace std;

void Logic(const char* str)
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

	string str;
	int idx = 0;

	cin >> str;
	cin >> idx;

	//기본1
	//cout << str[idx-1];

	//기본2
	//cout << str.at(idx-1);

	//타겟 인덱스 외에 다 지우는 방법도 가능
	str.erase(0, idx-1);
	str.erase(1, str.length() - 1);
	cout << str;
}
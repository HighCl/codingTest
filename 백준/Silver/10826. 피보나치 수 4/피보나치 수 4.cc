#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <list>
#include <set>
using namespace std;

long long fibonacciNum;
map<int, string> dynamicFibo_Map;

string AddString(string str1, string str2)
{
	string result = "";
	bool isNext = false;
	string addNum = "";

	if (str1.size() != str2.size())
		str1.insert(0, "0");

	for (long long i = str2.size() - 1; i >= 0; i--)
	{
		int num1 = str2[i] - 48;
		int num2 = str1[i] - 48;
		int add = num1 + num2;
		if (isNext == true)
		{
			isNext = false;
			add++;
		}

		if (add >= 10)
			isNext = true;

		if (i != 0 || isNext == false)
		{
			addNum = (add % 10) + 48;
			result.insert(0, addNum);
			//result = addNum + result;
		}
		else
		{
			addNum = (add % 10) + 48;
			result.insert(0, addNum);
			result.insert(0, "1");
			//result = "1" + addNum + result;
		}

		/*if (str1 == "233")
		{
			print(str1,"str1");
			print(str2,"str2");
			print(i, "i");
			print(addNum,"addNum");
			print(result, "res");
		}*/
	}

	return result;
}

void Input()
{
	cin >> fibonacciNum;
	//fibonacciNum = 10;
}

void Logic()
{
	dynamicFibo_Map[0] = "0";
	dynamicFibo_Map[1] = "1";
	for (int i = 2; i <= fibonacciNum; i++)
	{
		dynamicFibo_Map[i] = AddString(dynamicFibo_Map[i - 2], dynamicFibo_Map[i - 1]);
	}
	//cout << "\n";
	cout << dynamicFibo_Map[fibonacciNum];
	//cout << "\n\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Logic();
	//print(dynamicFibo_Map);
}
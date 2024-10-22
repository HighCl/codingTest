//#include "Util.h"
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;

#pragma region DefaultTemplate
//#include "Util.h"
//#include <ctime>
//clock_t start, finish;
//double duration;
//
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <stack>
//#include <vector>
//#include <map>
//#include <unordered_map>
//#include <algorithm>
//#include <queue>
//#include <list>
//#include <set>
//using namespace std;
//
//
//void Input()
//{
//}
// 
//void Logic()
//{
//}
//
//int main()
//{
//	start = clock();
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
// 
//	Input();
//	Logic();
//
// 	finish = clock();
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;
//	cout << endl << endl << duration << "sec" << endl;
//}
#pragma endregion


#pragma region CompareTemplate
void NormalSort()
{
	vector<int> vec;
	for (size_t i = 0; i < 5; i++)
	{
		vec.push_back(i * -1);
	}

	sort(vec.begin(), vec.end(), less<>());
	sort(vec.begin(), vec.end(), greater<>());
}

bool LessCompare(int i, int j)
{
	return i < j;
}

bool GreaterCompare(int i, int j)
{
	return i < j;
}
#pragma endregion

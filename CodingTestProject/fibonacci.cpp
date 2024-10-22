//#include "Util.h"
////int fibonacci(int n) {
////	if (n == 0) {
////		printf("0");
////		return 0;
////	}
////	else if (n == 1) {
////		printf("1");
////		return 1;
////	}
////	else {
////		return fibonacci(n-1) + fibonacci(n-2);
////	}
////}
////
////long long fibonacci_TopDown(int n)
////{
////	if (n == 0) return 0;
////	if (n == 1) return 1;
////
////	if (dp[n] != -1) return dp[n];
////
////	dp[n] = fibonacci_TopDown(n - 1) + fibonacci_TopDown(n - 2);
////	return dp[n];
////}
////
////long long fibonacci_BottomUp(int n)
////{
////	dp[0] = 0;
////	dp[1] = 1;
////	for (int i = 2; i <= n; i++)
////	{
////		dp[i] = dp[i - 1] + dp[i - 2];
////	}
////	return dp[n];
////}
//
//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <queue>
//#include <tuple>
//using namespace std;
//
//const int CNT = 1000;
//long long dp[CNT];
//int testCase, inputN;
//
//
//void Input()
//{
//	cin >> inputN;
//}
//
//int fibonacci(int n)
//{
//	if (n == 0)
//	{
//		dp[n] = 0;
//		return 0;
//	}
//	if (n == 1)
//	{
//		dp[n] = 1;
//		return 1;
//	}
//
//	if (dp[n] != -1)
//		return dp[n];
//
//	dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
//	return dp[n];
//}
//
//int main()
//{
//	vector<pair<int, int>> 출력값;
//	std::fill_n(dp, CNT, -1);
//
//	cin >> testCase;
//	for (size_t i = 0; i < testCase; i++)
//	{
//		Input();
//		fibonacci(inputN);
//
//		if (inputN == 0)
//			출력값.push_back(make_pair(1, 0));
//		else if (inputN == 1)
//			출력값.push_back(make_pair(0, 1));
//		else
//		{
//			출력값.push_back(make_pair(dp[inputN - 1], dp[inputN]));
//		}
//	}
//
//	for (size_t i = 0; i < 출력값.size(); i++)
//	{
//		cout << 출력값[i].first << " " << 출력값[i].second << "\n";
//	}
//}
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <tuple>
using namespace std;

const int CNT = 1000;
long long dp[CNT];
int testCase, inputN;

int solution(vector<vector<int>> triangle)
{
	vector<vector<int>> bestTriangle = triangle; //값복사

	//print(triangle, "triangle");
	for (size_t i = 0; i < triangle.size() - 1; i++)
	{
		for (size_t j = 0; j < triangle[i].size(); j++)
		{
			int addValue;
			addValue = bestTriangle[i][j] + triangle[i + 1][j];
			if (addValue > bestTriangle[i + 1][j])
				bestTriangle[i + 1][j] = addValue;

			addValue = bestTriangle[i][j] + triangle[i + 1][j + 1];
			if (addValue > bestTriangle[i + 1][j + 1])
				bestTriangle[i + 1][j + 1] = addValue;
		}
		//print(bestTriangle, "bestTriangle");
	}

	auto lastIter = bestTriangle.end() - 1;
	auto lastVector = *lastIter;

	int answer = *max_element(lastVector.begin(), lastVector.end());
	return answer;
}
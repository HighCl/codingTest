#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

int pqCount = 0;
priority_queue<int, vector<int>, greater<int>> greaterPQ; // 오름차순
priority_queue<int, vector<int>, less<int>> lessPQ; // 내림차순
unordered_map<int, int> dict;

vector<int> solution(vector<string> operations)
{
	vector<pair<int, int>> convertOperations;
	//인스턴스 생성

	for (size_t i = 0; i < operations.size(); i++)
	{
		pair<char, int> tempPair;
		tempPair.first = operations[i][0];
		tempPair.second = std::stoi(operations[i].substr(1));

		convertOperations.push_back(tempPair);
	}

	for (size_t i = 0; i < convertOperations.size(); i++)
	{
		if (convertOperations[i].first == 'I')
		{
			dict[convertOperations[i].second]++;
			greaterPQ.push(convertOperations[i].second);
			lessPQ.push(convertOperations[i].second);
			pqCount++;
		}
		else // D
		{
			if (pqCount == 0)
				continue;

			//1, 최댓값 제거
			if (convertOperations[i].second == 1)
			{
				int top = lessPQ.top();
				while (dict[top] == 0)
				{
					lessPQ.pop();
					int top = lessPQ.top();
				}
				lessPQ.pop();
				dict[top]--;
				pqCount--;
			}
			else // -1 최솟값 제거
			{
				int top = greaterPQ.top();
				while (dict[top] == 0)
				{
					greaterPQ.pop();
					int top = greaterPQ.top();
				}
				greaterPQ.pop();
				dict[top]--;
				pqCount--;
			}

			if (pqCount == 0)
			{
				greaterPQ = priority_queue<int, vector<int>, greater<int>>();
				lessPQ = priority_queue<int, vector<int>, less<int>>();
			}
		}
	}

	vector<int> answer;
	//최댓값 넣기
	if (lessPQ.size() != 0)
	{
		answer.push_back(lessPQ.top());
	}
	else
	{
		answer.push_back(0);
	}

	//최솟값 넣기
	if (greaterPQ.size() != 0)
	{
		answer.push_back(greaterPQ.top());
	}
	else
	{
		answer.push_back(0);
	}

	//print(greaterPQ, false);
	//print(lessPQ, false);

	return answer;
}
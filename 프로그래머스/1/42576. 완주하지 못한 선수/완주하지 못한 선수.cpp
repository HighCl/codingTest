#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
	string answer = "";
	unordered_map<string, int> strMap;
	for (auto elem : completion)
	{
		if (strMap.find(elem) == strMap.end())
			strMap.insert(make_pair(elem, 1));
		else
			strMap[elem]++;
	}

	for (auto elem : participant)
	{
		if (strMap[elem]-- == 0)
		{
			answer = elem;
			break;
		}
	}
	return answer;
}
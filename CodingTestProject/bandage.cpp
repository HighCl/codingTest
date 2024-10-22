//#include "Save.cpp"
//
////���� �������� ������� �����غ���
//// find�� iterator�� �̿��ϴ� ���.
////����. ���� iterator�� ����ϴ� ����� �ð��� ���� �ɸ���.
//#pragma region Solution1
//
////#include <iostream>
////#include <string>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////vector<string> solution(vector<string> players, vector<string> callings) 
////{
////	string caller;
////
////
////	for (size_t i = 0; i < callings.size(); i++)
////	{
////		auto it = find(players.begin(), players.end(), callings[i]);
////		caller = *it;
////		*it = *(it - 1);
////		*(it - 1) = caller;
////	}
////
////	return players;
////}
//
//#pragma endregion
//
////����, 
//// ���и� �߰ų�
////	���� (signal: segmentation fault (core dumped))
//// �� ������ ����
//// ����? �������� 1���� �����ѵ�??
//#pragma region Solution2
//
////#include <iostream>
////#include <string>
////#include <vector>
////#include <unordered_map>
////#include <algorithm>
////using namespace std;
////
////vector<string> solution(vector<string> players, vector<string> callings)
////{
////	string caller;
////	string downer;
////	unordered_map<string, int> hash; // int�� Ű�� string ����� ������ �ؽø� ����
////
////	for (int i = 0; i < players.size(); i++)
////	{
////		hash[players[i]] = i;
////	}
////
////	for (int i = 0; i < callings.size(); i++)
////	{
////
////		auto it = players.begin() + hash[callings[i]];
////		caller = *it;
////		downer = *(it - 1);
////
////		*it = *(it - 1);
////		*(it - 1) = caller;
////
////		hash[caller] = hash[caller] - 1;
////		hash[downer]= hash[downer]-1;
////	}
////
////	return players;
////}
////
//#pragma endregion
//
////����!
//#pragma region Solution3
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//vector<string> solution(vector<string> players, vector<string> callings)
//{
//	string caller;
//	string downer;
//	unordered_map<string, int> hash; // int�� Ű�� string ����� ������ �ؽø� ����
//
//	for (int i = 0; i < players.size(); i++)
//	{
//		hash[players[i]] = i;
//	}
//
//	for (int i = 0; i < callings.size(); i++)
//	{
//		auto playerIter = players.begin() + hash[callings[i]];
//		caller = *playerIter;
//
//		hash[*playerIter] -= 1;
//		hash[*(playerIter -1)] += 1;
//
//		*playerIter = *(playerIter - 1);
//		*(playerIter - 1) = caller;
//		
//	}
//
//	return players;
//}
//
//#pragma endregion
//
//#pragma region Answer1
//
////#include <string>
////#include <vector>
////#include <unordered_map>
////using namespace std;
////
////vector<string> solution(vector<string> players, vector<string> callings) {
////	vector<string> answer;
////
////	unordered_map<string, int> inds;
////
////	for (int i = 0; i < players.size(); ++i)
////	{
////		answer.emplace_back(players[i]);
////		inds.emplace(players[i], i);
////	}
////
////	for (const auto& v : callings)
////	{
////		int ind = inds.at(v);
////		int front = ind - 1;
////		
////		inds.at(answer[front]) = ind;
////		inds.at(v) = front;
////
////		swap(answer[ind], answer[front]);
////	}
////
////	return answer;
////}
//
//#pragma endregion
//
//
////int main()
////{
////	vector<string> players = { "mumu", "soe", "poe", "kai", "mine" };
////	vector<string> callings = { "kai","kai", "mine","mine"};
////
////	CoutVector(solution(players, callings));
////	return 0;
////}
#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n1 = 472;
	int n2 = 385;

	cin >> n1;
	cin >> n2;
	//cout << n1 << " " << n2 << endl<<endl;

	cout << n1 * (n2 % 10) << endl;
	cout << n1 * ((n2 / 10) % 10) << endl;
	cout << n1 * (n2 / 100) << endl;
	cout << n1 * n2 << endl;

	return 0;
}
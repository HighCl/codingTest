//#include "PrintUtil.h"
//#include <bits/stdc++.h>
//-----------------
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX 101

string inputString;
string resultString;

void Input()
{
	cin >> inputString;
}


void PrintResult()
{
	resultString = inputString;
	for (size_t i = 0; i < resultString.length(); i++)
	{
		char current = resultString[i];
		if (current >= 65 && current <= 90)
			current += 32;
		else
			current -= 32;
		cout << current;
	}
}

int main()
{
	Input();
	PrintResult();
}
// hailstone.cpp : 为了验证的算法的有穷性
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int hailstone(int);

int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 42; i < 43; i++)
	{
		cout << i << ':' << hailstone(i) << endl;
	}

	return 0;
}

int hailstone(int n)
{
	int length = 1;
	while (n > 1)
	{
		n % 2 ? n = n * 3 + 1 : n /= 2; 
		length++;
	}
	return length;
}
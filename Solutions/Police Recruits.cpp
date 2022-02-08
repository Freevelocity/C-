#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iterator>


using namespace std;


int main()
{

	int n,c,cutoff=0,untreaded=0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (c > 0)
		{
			cutoff += c;
		}
		else
			if (cutoff < 1)
			{
				++untreaded;
			}
			else
				cutoff--;
	}
	cout << untreaded;
}

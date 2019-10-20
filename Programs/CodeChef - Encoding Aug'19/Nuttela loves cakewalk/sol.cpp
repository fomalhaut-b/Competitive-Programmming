#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << "\n" \
					  << (#x) << " is " << (x) << endl
const double PI = 3.141592653589793238463;
const int MOD = 1000000007;
const long long MAXI = ULONG_MAX;

/*
$alil03

URL: url

Solution Begins here
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long maximum = -1;
		long long minimum = INT_MAX;
		while (n--)
		{
			long long x;
			cin >> x;
			maximum = max(x, maximum);
			minimum = min(x, minimum);
		}
		cout << minimum << " " << maximum << "\n";
	}
}
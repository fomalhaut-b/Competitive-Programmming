#include<bits/stdc++.h>
using namespace std;

#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
const double PI  = 3.141592653589793238463;
const int INF = 0x3f3f3f3f;
const int MOD = 1000000007;

/*
$alil03
Solution Begins here
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n, temp;
		long long int sum;
		cin >> n >> sum;
		for(int i = 1; i<n; i++)
		{
			cin >> temp;
			sum += temp-1;
		}
		cout << sum << "\n";
	}
}
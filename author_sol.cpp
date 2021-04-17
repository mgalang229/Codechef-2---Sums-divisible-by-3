#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long s0, s1, s2;
		cin >> s0 >> s1 >> s2;
		long long val = abs(s1 - s2);
		cout << s0 + min(s1, s2) + (val / 3) << '\n';
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

string s, p;

int find_substring(string& s, string& p) {
	int n = s.size();
	int m = p.size();
	if (m > n) return -1;

	for (int i = 0; i <= n-m; i++)
	{
		bool ok = true;
		for (int j = 0; j < m; j++)
		{
			if (s[i + j] != p[j]) {
				ok = false;
				break;
			}
		}
		if (ok) return i;
	}
	return -1;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> s;
	cin >> p;

	cout << find_substring(s, p);
	return 0;
	

}
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// find the smallest letter in string 's' (based on its ASCII value or order in the alphabet)
		// by creating a copy of string 's' and sorting it
		// string 'a' will contain the first letter of the copy string created
		// then we need to erase this certain letter from the original 's' string
		// string 'b' will contain the original string that was modified
		string copy_s = s;
		sort(copy_s.begin(), copy_s.end());
		auto it = find(s.begin(), s.end(), copy_s[0]);
		s.erase(it);
		cout << copy_s[0] << " " << s << '\n';
	}
	return 0;
}

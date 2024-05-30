#include<bits/stdc++.h>
using namespace std;
char arr[100];
string s;
char ans[100];
set<string>v;
int ok = 0;
int check(char c[100], int n) {
	if (n <= 1) 	return 0;
	stack<char> st;
	for (int i = 0; i < n; i++) {
		if (c[i] == '(') 	st.push('(');
		else {
			if (c[i] == ')') {
				if (st.empty()) 	return 0;
				st.pop();
			}
		}
	}
	if (st.empty())return 1;
	return 0;
}
void dequy(int i, int cnt) {
	if (cnt >= 2) {
		if (check(ans, cnt)) {
			ok = 1;
			string m = "";
			for (int i = 0; i < cnt; i++) {
				m += ans[i];
			}
			v.insert(m);
		}
	}
	for (int j = i; j < s.size(); j++) {
		ans[cnt] = arr[j];
		dequy(j + 1, cnt + 1);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		v.clear();
		cin >> s;
		ok = 0;
		for (int i = 0; i < s.size(); i++) 	arr[i] = s[i];
		dequy(0, 0);
		if (!ok) cout << -1;
		else {
			int ans = INT_MAX;
			for (auto a : v) 	if (s.size() - a.size() < ans) 	ans = s.size() - a.size();
			for (auto a : v) 	if (a.size() == s.size() - ans) 	cout << a << " ";
		}
		cout << endl;
	}
}

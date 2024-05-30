#include<bits/stdc++.h>
using namespace std;
int arr[100005],n,check[100005];
vector<pair<int, int>> a;
vector<int>le;
void setup() {
	for (int i = 0; i < le[0]; i++) 	check[i] = le[0];
	for (int i = 1; i < le.size(); i++) for (int j = le[i - 1] + 1; j < le[i]; j++) check[j] = le[i];
}
int merge( int l, int m, int r) {
	vector<pair<int, int>> x, y;
	map<int,int>cnt;
	for (int i = l; i <= m; i++) {
		x.push_back(a[i]);
		cnt[check[a[i].second]]++;
	}
	for (int i = m + 1; i <= r; i++) 	y.push_back(a[i]);
	int i = 0,j=0,ans=0;
	while (i < x.size() && j < y.size()) {
		if (x[i].first <= y[j].first) {
			cnt[check[x[i].second]]--;
			a[l++] = x[i++];
		}
		else {
			ans = ans + x.size() - i-cnt[check[y[j].second]];
			a[l++] = y[j++];
		}
	}
	while(i<x.size()) a[l++] = x[i++];
	while(j<y.size()) a[l++] = y[j++];
	return ans;
}
int mergersort( int l, int r) {
	int dem = 0;
	if (l < r) {
		int mid = (l + r) / 2;
		dem += mergersort( l, mid);
		dem += mergersort( mid + 1, r);
		dem += merge( l, mid, r);
	}
	return dem;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) 	cin >> arr[i];
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) 	le.push_back(i);
		else 		a.push_back({ arr[i],i });
	}
	if (le.size() == 0||a.size()<2) 	cout << 0;
	else {
		setup();
		cout << mergersort( 0, a.size() - 1);
	}
}

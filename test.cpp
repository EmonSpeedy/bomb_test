#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	for(int i = 0; i < v.size(); i++){
		v[i] += 2;
	}
	for(auto i : v) cout << i << " ";
	cout << "\n";
}

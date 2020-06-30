#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s[4];
	for(int i = 0; i < 4; i++) cin >> s[i];
	string s2[4];
	for(int i = 0; i < 4; i++) cin >> s2[i];
	int cnt = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(s[i] == s2[j]){
				cnt++;
			}
		}
		if(cnt == 2) break;
	}
	cout << (cnt == 2 ? "similar" : "dissimilar") << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
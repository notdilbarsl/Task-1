#include <bits/stdc++.h>

using namespace std;
#define ll int


int main(void) {
	ll n = 9;
	set<vector<ll>> seen;
	map<vector<ll>, ll> vmap;

	vector<ll> a(n);
	for (ll i = 0; i < n; ++i) scanf("%d", &a[i]);

	set<pair<ll, vector<ll>>> qu;
	vector<ll> tmp3 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<ll> tmp2 = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	qu.insert({0, vector<ll>{1, 2, 3, 4, 5, 6, 7, 8, 9}});
	qu.insert({0, vector<ll>{9, 8, 7, 6, 5, 4, 3, 2, 1}});
	seen.insert(tmp3);
	seen.insert(tmp2);
	vmap[tmp2] = 0;
	vmap[tmp3] = 0;

	while (qu.size() != 0) {
		pair<ll, vector<ll>> p = *qu.begin();
		qu.erase(qu.begin());

		if (p.first == 4) continue;

		vector<ll> vals = p.second;
		for (ll i = 0; i < n - 1; ++i) {
			ll inc = vals[i + 1] > vals[i];
			for (ll j = i + 1; j < n; ++j) {
				if ((vals[j] < vals[j - 1]) ^ inc) {
				       reverse(vals.begin() + i, vals.begin() + j + 1);	
				       if (seen.find(vals) == seen.end()) {
					       seen.insert(vals);
					       vmap[vals] = p.first + 1;
					       qu.insert({p.first + 1, vals});
				       }
				       reverse(vals.begin() + i, vals.begin() + j + 1);
				} else break;
			}
		}
	}

		qu.clear();
		qu.insert({0, a});
		set<vector<ll>> seen2;
		seen2.insert(a);

		int ans = -1;

		while (qu.size() != 0) {
			pair<ll, vector<ll>> p = *qu.begin();
			qu.erase(qu.begin());

			if (vmap.find(p.second) != vmap.end()) {
				ans = vmap[p.second] + p.first;
				break;
			}

			vector<ll> vals = p.second;
			for (ll i = 0; i < n - 1; ++i) {
				ll inc = vals[i + 1] > vals[i];
				for (ll j = i + 1; j < n; ++j) {
					if ((vals[j] < vals[j - 1]) ^ inc) {
						reverse(vals.begin() + i, vals.begin() + j + 1);
						if (seen2.find(vals) == seen2.end()) {
							seen2.insert(vals);
							qu.insert({p.first + 1, vals});
						}
						reverse(vals.begin() + i, vals.begin() + j + 1);
					} else break;
				}
			}
		}
		printf("%d\n", ans);
	return 0;
}


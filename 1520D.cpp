#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int ans=0;
    cin >> n;
    vector<int> v;
    long long res = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x-i);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
      if(v[i]==v[i+1])
        res++;
    }
    for(int i=1;i<=res;i++){
      ans+=i;
    }
    cout << res+1 <<endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}


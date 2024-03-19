#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int ans = arr[0];
        for(int i=1;i<n;i++){
            ans=max(ans,arr[i]-arr[i-1]);
        }
        ans = max(ans,2*(k-arr[n-1]));
        cout<<ans<<endl;
    }
}
int main(){
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int maxDiff = a[0]-0;
        for(int i = 0;i < n-1; i++){
            maxDiff = max(maxDiff,a[i+1]-a[i]);
        }
        maxDiff = max(2*(x-a[n-1]),maxDiff);
        cout<<maxDiff<<endl;
    }
    return 0;
}

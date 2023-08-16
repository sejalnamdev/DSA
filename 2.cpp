#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    // your code goes here
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int ans = INT_MAX;
        for(int i = 1; i < n - 1; i++)
            ans = min(ans, max(abs(a[i] - a[i-1]), abs(a[i+1] - a[i])));
        cout << ans << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '<')
            a[i + 1] = a[i] + 1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '>')
            a[i] = max(a[i], a[i + 1] + 1);
        ans += a[i];
    }
    ans += a[n];
    cout << ans << endl;
}

int main()
{
#ifdef LOCAL
    freopen("C:/JNU/c++/in.txt", "r", stdin);
    freopen("C:/JNU/c++/out.txt", "w", stdout);
#endif
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        solve();
    }
#ifdef LOCAL
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}
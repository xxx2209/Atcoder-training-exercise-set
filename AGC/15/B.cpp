#include <iostream>
#include <cstdio>
#include <string>
// #define LOCAL

using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (s[i] == 'U' ? n + i - 1 : 2 * (n - 1) - i);
    }
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
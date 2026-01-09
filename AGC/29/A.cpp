#include <iostream>
#include <string>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'W')
            cnt++;
        else
            ans += cnt;
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
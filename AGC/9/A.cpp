#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;
int a[maxn], b[maxn];

void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d\n", &a[i], &b[i]);
    }
    ll ans = 0;
    for (int i = n; i >= 1; i--)
    {
        int m = (a[i] + ans) % b[i];
        if (m != 0)
        {
            ans += b[i] - m;
        }
    }
    printf("%lld\n", ans);
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
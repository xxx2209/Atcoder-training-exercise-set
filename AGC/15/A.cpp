#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;

void solve()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    if (a > b || (n == 1 && a != b))
    {
        printf("0\n");
        return;
    }
    ll ans = (ll)(n - 2) * (b - a) + 1;
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
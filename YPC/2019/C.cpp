#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;

void solve()
{
    int k, a, b;
    scanf("%d %d %d", &k, &a, &b);
    if (b - a < 3)
    {
        printf("%d\n", k + 1);
        return;
    }
    ll ans = 1;
    while (k)
    {
        while (ans < a)
        {
            ans++;
            k--;
        }
        if (k < 2)
        {
            printf("%lld\n", ans + k);
            return;
        }
        ans += b - a;
        k -= 2;
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
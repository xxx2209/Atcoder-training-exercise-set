#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
typedef long long ll;

void solve()
{
    int h, w;
    scanf("%d %d", &h, &w);
    if (h == 1 || w == 1)
    {
        printf("1\n");
        return;
    }
    ll ans = (ll)h * w / 2;
    if (h & 1 && w & 1)
        ans++;
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
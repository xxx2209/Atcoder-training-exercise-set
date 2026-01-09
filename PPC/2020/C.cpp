#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
using ll = long long;

void solve()
{
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (c <= a + b)
    {
        printf("No\n");
        return;
    }
    if (4 * a * b < (c - a - b) * (c - a - b))
        printf("Yes\n");
    else
        printf("No\n");
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
#include <iostream>
#include <cstdio>
#include <algorithm>
// #define LOCAL

using namespace std;
typedef long long ll;
const int maxn = 1e5 + 5;
int a[maxn], b[maxn], diff[maxn];

void solve()
{
    int n;
    scanf("%d", &n);
    ll sum_a = 0, sum_b = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        sum_a += a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
        sum_b += b[i];
    }
    int ans = 0;
    if (sum_a < sum_b)
        ans = -1;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            diff[i] = a[i] - b[i];
        }
        sort(diff + 1, diff + n + 1);
        ll s = 0;
        for (int i = 1; diff[i] < 0; i++)
        {
            s += diff[i];
            ans++;
        }
        for (int i = n; s < 0; i--)
        {
            s += diff[i];
            ans++;
        }
    }
    printf("%d\n", ans);
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
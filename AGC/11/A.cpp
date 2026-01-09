#include <iostream>
#include <cstdio>
#include <algorithm>
// #define LOCAL

using namespace std;
const int maxn = 1e5 + 5;
int t[maxn];

void solve()
{
    int n, c, k;
    scanf("%d %d %d", &n, &c, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &t[i]);
    }
    sort(t + 1, t + n + 1);
    int ans = 0;
    for (int i = 1, j = 1; i <= n;)
    {
        while (j <= n && j - i < c && t[j] - t[i] <= k)
            j++;
        ans++;
        i = j;
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
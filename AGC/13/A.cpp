#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
const int maxn = 1e5 + 5;
int a[maxn];

void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    for (int i = 1, j = 2; i <= n;)
    {
        if (a[i] == a[j])
            while (j <= n && a[j - 1] == a[j])
                j++;
        if (j > n)
        {
            ans++;
            break;
        }
        if (a[i] < a[j])
            while (j <= n && a[j - 1] <= a[j])
                j++;
        else
            while (j <= n && a[j - 1] >= a[j])
                j++;
        ans++;
        i = j;
        j = i + 1;
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
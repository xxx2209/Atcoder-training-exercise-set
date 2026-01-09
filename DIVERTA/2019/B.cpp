#include <iostream>
#include <cstdio>
#include <algorithm>
// #define LOCAL

using namespace std;

void solve()
{
    int a[3], b[3], n;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    sort(a, a + 3);
    reverse(a, a + 3);
    for (int i = 0; i < 3; i++)
    {
        b[i] = n / a[i];
    }
    int ans = 0;
    for (int i = 0; i <= b[0]; i++)
        for (int j = 0; j <= b[1]; j++)
        {
            int t = n - a[0] * i - a[1] * j;
            if (t >= 0 && t % a[2] == 0)
                ans++;
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
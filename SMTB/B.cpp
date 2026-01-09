#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
const int maxn = 5e4 + 5;
int a[maxn];

void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a[i] = int(i * 1.08);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == n)
        {
            printf("%d\n", i);
            return;
        }
    }
    printf(":(\n");
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
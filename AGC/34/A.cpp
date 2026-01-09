#include <iostream>
#include <cstdio>
#include <algorithm>
// #define LOCAL

using namespace std;
const int maxn = 2e5 + 10;
char s[maxn];

void solve()
{
    int n, a, b, c, d;
    scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
    scanf("%s", s + 1);
    for (int i = a; i + 1 <= max(c, d); i++)
    {
        if (s[i] == '#' && s[i + 1] == '#')
        {
            printf("No\n");
            return;
        }
    }
    if (c < d)
    {
        printf("Yes\n");
        return;
    }
    else
    {
        for (int i = b; i <= d; i++)
        {
            if (s[i] == '.' && s[i - 1] == '.' && s[i + 1] == '.')
            {
                printf("Yes\n");
                return;
            }
        }
    }
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
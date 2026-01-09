#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
char g[10][10];

void solve()
{
    int h, w;
    scanf("%d %d", &h, &w);
    for (int i = 1; i <= h; i++)
        scanf("%s", g[i] + 1);
    int cnt = 0;
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= w; j++)
            if (g[i][j] == '#')
                cnt++;
    if (cnt == h + w - 1)
        printf("Possible\n");
    else
        printf("Impossible\n");
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
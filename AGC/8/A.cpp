#include <iostream>
#include <cstdio>
#include <cmath>
// #define LOCAL

using namespace std;

void solve()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int ans, d = abs(abs(x) - abs(y));
    if ((x < 0 && y > 0) || (x > 0 && y < 0))
        ans = d + 1;
    else if (x == 0)
    {
        if (y > 0)
            ans = d;
        else
            ans = d + 1;
    }
    else if (y == 0)
    {
        if (x > 0)
            ans = d + 1;
        else
            ans = d;
    }
    else
    {
        if (x > y)
            ans = abs(x - y) + 2;
        else
            ans = abs(x - y);
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
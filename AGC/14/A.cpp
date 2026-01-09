#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;

void solve()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int cnt = 0;
    if (a == b && b == c && a % 2 == 0)
        cnt = -1;
    else
    {
        while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
        {
            int ta = a, tb = b, tc = c;
            a = (tb + tc) / 2;
            b = (ta + tc) / 2;
            c = (ta + tb) / 2;
            cnt++;
        }
    }
    printf("%d\n", cnt);
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
#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    int v1 = -1, c1 = 0, v2 = -1, c2 = 0, v3 = -1, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if (v1 == -1 || a == v1)
            v1 = a, c1++;
        else if (v2 == -1 || a == v2)
            v2 = a, c2++;
        else if (v3 == -1 || a == v3)
            v3 = a, c3++;
        else
        {
            printf("No\n");
            return;
        }
    }
    if ((v2 == -1 && v1 == 0) || (v3 == -1 && v1 == 0 && c2 == 2 * c1) || (v3 == -1 && v2 == 0 && c1 == 2 * c2) || ((v1 ^ v2 ^ v3) == 0 && (c1 == c2 && c2 == c3)))
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
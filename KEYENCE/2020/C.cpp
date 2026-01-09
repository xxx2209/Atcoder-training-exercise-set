#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;

void solve()
{
    int n, k, s;
    scanf("%d %d %d", &n, &k, &s);
    for (int i = 0; i < k; i++)
        printf("%d ", s);
    if (s == 1e9)
        for (int i = k; i < n; i++)
            printf("%d ", 1);
    else
        for (int i = k; i < n; i++)
            printf("%d ", s + 1);
    printf("\n");
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
#include <iostream>
#include <cstdio>
// #define LOCAL

using namespace std;
const int maxn = 1e5 + 5;
char s[maxn];

void solve()
{
    int n, a, b;
    scanf("%d %d %d\n", &n, &a, &b);
    scanf("%s", s);
    int total = 0, overseas = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' && total < a + b)
        {
            total++;
            printf("Yes\n");
        }
        else if (s[i] == 'b' && total < a + b && overseas < b)
        {
            total++;
            overseas++;
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
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
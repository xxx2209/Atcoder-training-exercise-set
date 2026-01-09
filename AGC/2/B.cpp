#include <iostream>
#include <cstdio>
#include <set>
// #define LOCAL

using namespace std;
const int maxn = 1e5 + 5;
int cnt[maxn];

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    set<int> s;
    s.insert(1);
    for (int i = 1; i <= n; i++)
        cnt[i] = 1;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (s.find(x) != s.end())
            s.insert(y);
        cnt[x]--;
        cnt[y]++;
        if (cnt[x] == 0)
            s.erase(x);
    }
    printf("%d\n", s.size());
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
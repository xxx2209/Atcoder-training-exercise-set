#include <iostream>
#include <cstdio>
#include <map>
#include <set>
// #define LOCAL

using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    map<int, int> cnt;
    set<int> unique_numbers;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (!cnt.count(x))
            cnt[x] = 0;
        cnt[x]++;
        unique_numbers.insert(x);
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        if (unique_numbers.count(x))
        {
            cnt[x]--;
            if (cnt[x] == 0)
                unique_numbers.erase(x);
        }
        else
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
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
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
// #define LOCAL

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = n;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int now = 0, mx = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == i)
                now = 0;
            else
                mx = max(mx, ++now);
        }
        ans = min(ans, mx);
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
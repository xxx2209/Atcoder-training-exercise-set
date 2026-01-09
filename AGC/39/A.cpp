#include <iostream>
#include <cstdio>
#include <cstring>
// #define LOCAL

using namespace std;
typedef long long ll;
const int maxn = 105;
char s[maxn];

void solve()
{
    scanf("%s", s);
    int k;
    scanf("%d", &k);
    int len = strlen(s);
    ll ans = 0;
    if (s[0] != s[len - 1])
    {
        ll cnt = 0;
        for (int i = 0, j = 0; i < len;)
        {
            while (j < len && s[i] == s[j])
                j++;
            cnt += (j - i) / 2;
            i = j;
        }
        ans = cnt * k;
    }
    else
    {
        ll a = 0, b = 0, cnt = 0;
        for (int i = 0, j = 0; i < len;)
        {
            while (j < len && s[i] == s[j])
                j++;
            if (i == 0)
                a = j - i;
            else if (j == len)
                b = j - i;
            else
                cnt += (j - i) / 2;
            i = j;
        }
        if (a == len)
            ans = k * a / 2;
        else
            ans = a / 2 + b / 2 + (a + b) / 2 * (k - 1) + cnt * k;
    }
    printf("%lld\n", ans);
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
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
    int cnt[3] = {0};
    for (char c : s)
    {
        cnt[c - 'a']++;
    }
    sort(cnt, cnt + 3);
    int mx = cnt[2];
    int mi = cnt[0];
    if (mx - mi <= 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
#include <iostream>
#include <cstdio>
#include <string>
// #define LOCAL

using namespace std;

void solve()
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    int length = 0;
    for (int i = 0; i < n; ++i)
        if (s.substr(i, n - i) == t.substr(0, n - i))
        {
            length = n - i;
            break;
        }
    cout << 2 * n - length << endl;
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
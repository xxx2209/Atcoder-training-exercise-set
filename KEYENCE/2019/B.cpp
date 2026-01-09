#include <iostream>
#include <cstdio>
#include <string>
// #define LOCAL

using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        for (int j = 0; j <= s.size() - i; j++)
        {
            string t = s;
            if (t.erase(i, j) == "keyence")
            {
                cout << "YES" << endl;
                return;
            }
        }
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
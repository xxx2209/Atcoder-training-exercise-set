#include <iostream>
#include <cstdio>
#include <vector>
// #define LOCAL

using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int> b(n + 1);
    int index = n;
    while (a.size() > 1)
    {
        int m = a.size();
        bool flag = false;
        for (int i = m - 1; i >= 1; i--)
        {
            if (i == a[i])
            {
                b[index--] = a[i];
                a.erase(a.begin() + i);
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
    cout << endl;
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
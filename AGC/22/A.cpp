#include <iostream>
#include <cstdio>
#include <string>
#include <set>
// #define LOCAL

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    set<char> st;
    for (int i = 0; i < n; i++)
        st.insert(s[i]);
    string ans;
    if (n < 26)
    {
        for (char c = 'a'; c <= 'z'; c++)
            if (st.find(c) == st.end())
            {
                ans = s + c;
                break;
            }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            bool flag = false;
            for (char c = s[i] + 1; c <= 'z'; c++)
                if (st.find(c) == st.end())
                {
                    ans = s.substr(0, i) + c;
                    flag = true;
                    break;
                }
            if (flag)
                break;
            st.erase(s[i]);
        }
        if (st.size() == 0)
            ans = "-1";
    }
    cout << ans << endl;
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
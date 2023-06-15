#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define pb push_back
#define mp make_pair
#define endl "\n"
 
#define f0r(i, n) for (int i = 0; i < n; i++)
 
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
 
int32_t main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int aaaa, bbbb;
        cin >> aaaa >> bbbb;
        if (aaaa == 1 && bbbb == 1)
        {cout << 1 << endl;
            cout << aaaa << " " << bbbb << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << aaaa - 1 << " " << 1 << endl;
            cout << aaaa << " " << bbbb << endl;
        }
    }
}
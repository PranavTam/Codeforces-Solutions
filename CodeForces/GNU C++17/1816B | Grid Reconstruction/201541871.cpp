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
        int n, count;
        cin >> n;
        int result[2][n];
        count = 2 * n;
        for (int i = 0; i < n; i += 2)
        {
            result[0][i] = count;
            count -= 2;
        }
       
        count = 1;
        for (int i = 0; i < n; i += 2)
        {
            result[1][i] = count;
            count += 2;
        }
        count = 2;
        for (int i = 1; i < n; i += 2)
        {
            result[0][i] = count;
            count += 2;
        }
   count = n + 1;
        for (int i = 1; i < n; i += 2)
        {
            result[1][i] = count;
            count += 2;
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
}
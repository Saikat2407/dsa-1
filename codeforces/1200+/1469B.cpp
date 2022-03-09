#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define REP(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define INF 1000000000
#define endl '\n'
typedef unsigned long long ll;
using namespace std;

vi prefxSum(vi arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
        arr[i] += arr[i - 1];
    return arr;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    vi b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    a = prefxSum(a);
    b = prefxSum(b);
    int maxA = 0, maxB = 0;
    for (int i = 0; i < n; i++)
        if (maxA < a[i])
            maxA = a[i];
    for (int i = 0; i < m; i++)
        if (maxB < b[i])
            maxB = b[i];
    cout << maxA + maxB << "\n";
}

int main()
{
    SPEED;
    // solve();
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
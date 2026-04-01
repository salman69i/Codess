#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = 0, mn = INT_MAX;
    int imx, imn;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > mx)
        {
            mx = arr[i];
            imx = i;
        }
        if (arr[i] <= mn)
        {
            mn = arr[i];
            imn = i;
        }
    }
    int ans = 0;
    ans += imx;
    ans += (n - 1 - imn);
    if (imx > imn)
        ans--;
    cout << ans << "\n";
}

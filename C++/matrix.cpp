#include <iostream>
using namespace std;
int main()
{
    int ai, aj, ans = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            // cout << i << " " << j << "  ";
            int x;
            cin >> x;
            if (x == 1)
            {
                ai = i;
                aj = j;
            }
        }
        cout << "\n"
             << "\n";
    }
    ans += abs(3 - ai) + abs(3 - aj);

    cout << ans << "\n";
    
    return 0;
}
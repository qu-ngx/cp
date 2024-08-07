#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ans = 0;
    int n, h; // size and height
    cin >> n >> h;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
    }

    cout << ans << endl;
}
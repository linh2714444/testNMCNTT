#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[500000];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    if (n < k)
        cout << "Not found";
    else
        cout << a[k];
    cout << "Hello Wordl";
    return 0;
}
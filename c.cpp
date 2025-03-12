#include <bits/stdc++.h>
#define int long long

signed main()
{
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 1, x; i <= n; ++i)
        std::cin >> x, sum += log2(x);
    int ans = std::ceil(sum * 1.0 / log2(2024));
    std::cout << ans << '\n';
}
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

using LL = long long;

bool Check(LL ha, LL da, LL hb, LL db) {
    LL rd = max(min(hb / da, ha / db) - 1, 0LL);
    ha -= rd * db;
    hb -= rd * da;
    while (ha > 0 && hb > 0) {
        hb -= da;
        if (hb <= 0) return true;
        ha -= db;
        if (ha <= 0) return false;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int times;
    cin >> times;
    while (times--) {
        LL ha, da, hb, db;
        cin >> ha >> da >> hb >> db;
        LL k, w, a;
        cin >> k >> w >> a;
        bool flag = false;
        for (int i = 0; i <= k; ++i) {
        if (Check(ha + i * a, da + w * (k - i), hb, db)) {
            flag = true;
            break;
        }
        }
        if (flag) {
        cout << "YES\n";
        } else {
        cout << "NO\n";
        }
    }
    return 0;
}
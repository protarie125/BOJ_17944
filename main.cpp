#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, t;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> t;
  ll ans = 1;
  ll d = 1;
  while (1 < (t--)) {
    ans += d;
    if (ans == 2 * n) {
      d = -1;
    } else if (ans == 1) {
      d = 1;
    }
  }
  cout << ans;

  return 0;
}
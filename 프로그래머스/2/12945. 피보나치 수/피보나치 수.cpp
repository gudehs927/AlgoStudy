#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    const int MOD = 1234567;
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int prev2 = 0;  // F(n-2)
    int prev1 = 1;  // F(n-1)
    int current = 0;
    
    for (int i = 2; i <= n; i++) {
        current = (prev1 + prev2) % MOD;
        prev2 = prev1;
        prev1 = current;
    }
    
    return current;
}
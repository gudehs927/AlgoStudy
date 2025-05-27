#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int k = n/2;
    int sum = 0;
    for (int i = 0;i<=k;++i)
    {
        sum += i*2;
    }
    return sum;
}
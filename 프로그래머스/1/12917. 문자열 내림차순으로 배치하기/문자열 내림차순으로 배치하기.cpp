#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare (char i, char j) {
        return j<i;
    }
string solution(string s) {
    sort(s.begin(), s.end(),compare);
    return s;
}
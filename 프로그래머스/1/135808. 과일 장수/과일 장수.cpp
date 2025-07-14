#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int apple =0;
    sort(score.rbegin(),score.rend());
    for(int i = 1; i <= score.size()/m; i++){
        apple = score[m*i-1];
        answer += apple*m;
    }
    return answer;
}
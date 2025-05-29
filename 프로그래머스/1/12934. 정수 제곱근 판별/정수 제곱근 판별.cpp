#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    for(long i = 1; i <= n; i++){
        if(n == i*i){
            answer = (i+1)*(i+1);
            break;
        }
        else if(n<i*i){
            answer = -1;
            break;
        }
    }
    return answer;
}
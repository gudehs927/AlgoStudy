#include <string>
#include <cmath>
#include <vector>

using namespace std;

int countD(int n){
    int count=0;
    for(int i = 1; i <= sqrt(n); i++){
         if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}
int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; ++i){
        int attack = countD(i);
        if(attack > limit){
            answer += power;
        }else{
            answer += attack;
        }
    }
    return answer;
}
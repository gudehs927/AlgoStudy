#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int k = 0;
    while(left <= right){
        for(int i = 1; i <= left; i++){
            if(left%i == 0){
                k++;
            }
        }
        if(k%2 == 0){
            answer += left;
        }else{
            answer -= left;
        }
        k = 0;
        left++;
    }
    return answer;
}
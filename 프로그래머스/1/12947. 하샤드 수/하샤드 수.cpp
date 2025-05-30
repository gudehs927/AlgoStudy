#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int k = x;
    while(x != 0){
        sum = sum + x%10;
        x = x/10;
    }
    if(k%sum==0){
        return answer;
    }else{
        return false;
    }
}
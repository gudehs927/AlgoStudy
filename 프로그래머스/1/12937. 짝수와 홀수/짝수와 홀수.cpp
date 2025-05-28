#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    
    if(num%2 == 0){
        string answer = "Even";
        return answer;
    }else{
        string answer = "Odd";
        return answer;
    }
}
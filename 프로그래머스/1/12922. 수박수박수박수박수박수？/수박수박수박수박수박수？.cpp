#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int k = 0;
    while(k < n){
        if(k%2 == 0){
            answer += "수";
        }else{
            answer += "박";
        }
        k++;
    }
    return answer;
}
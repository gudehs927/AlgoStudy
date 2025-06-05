#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size() % 2 ==0){
        int n = s.size()/2;
        answer += s[n-1];
        answer += s[n];
    } else{
        int n = s.size()/2;
        answer = s[n];
    }
    
    return answer;
}
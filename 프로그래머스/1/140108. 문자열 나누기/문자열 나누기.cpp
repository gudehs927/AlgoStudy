#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i = 0;
    while (i<s.length()){
        answer++;
        
        char x = s[i];
        int same = 1;
        int other = 0;
        
        int j = i + 1;
        for (; j <s.length(); ++j){
            if(s[j] == x){
                same++;
            }else{
                other++;
            }
            if (same == other){
                break;
            }
        }
        i = j + 1;
    }
    return answer;
}
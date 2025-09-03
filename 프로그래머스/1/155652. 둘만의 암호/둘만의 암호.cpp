#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string non_skip ="";
    
    for (char c = 'a'; c <= 'z'; ++c){
        if(skip.find(c) == string::npos) {
            non_skip += c;
        }
    }
    
    for (char ch : s) {
        size_t current_pos = non_skip.find(ch);
        size_t new_pos = (current_pos + index) % non_skip.length();
        answer += non_skip[new_pos];
    }
    return answer;
}
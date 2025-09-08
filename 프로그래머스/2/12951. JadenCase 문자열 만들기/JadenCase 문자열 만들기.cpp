#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    bool StartWord = true;
    for (char &c : s){
        if(StartWord) {
            c = toupper(c);
        }else {
            c = tolower(c);
        }
        if(c == ' '){
            StartWord = true;
        } else {
            StartWord = false;
        }
    }
    return s;
}
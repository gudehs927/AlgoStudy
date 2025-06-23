#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(string s) {
    string answer = "";
    string tmp = "";
    map<string, int> num = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine",9}};
    
    for(char i : s){
        if(isdigit(i)){
            answer += i;
        }else{
            tmp += i;
            if(num.find(tmp) != num.end()){
            answer += to_string(num[tmp]);
            tmp = "";
            }
        }
    }   
    return stoi(answer);
}
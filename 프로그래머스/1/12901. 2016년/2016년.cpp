#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string day[7] = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sum = 0;
    for(int i = 0; i < a-1; i++){
        sum += month[i];
    }
    sum += b-1;
    answer = day[sum%7];
    return answer;
}
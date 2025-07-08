#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int i = 1; i < food.size(); i++){
        for(int j = 0; j < food[i]/2; j++){
            answer += to_string(i);
        }
    }
    string answer2 = string(answer.rbegin(), answer.rend());
    return answer + '0'+ answer2;
}
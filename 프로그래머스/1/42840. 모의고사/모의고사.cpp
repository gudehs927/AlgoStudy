#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer = {0, 0, 0};
    vector<int> answer1;
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> thr = {3,3,1,1,2,2,4,4,5,5};
    for(int i = 0; i < answers.size(); i++){
        if(one[i%one.size()] == answers[i]){
            answer[0]++;
        }
        if(two[i%two.size()] == answers[i]){
            answer[1]++;
        }
        if(thr[i%thr.size()] == answers[i]){
            answer[2]++;
        }
    }
    int max = *max_element(answer.begin(), answer.end());
    for (int i = 0; i < 3; i++){
        if(max == answer[i]){
            answer1.push_back(i+1);
        }
    }
    return answer1;
}
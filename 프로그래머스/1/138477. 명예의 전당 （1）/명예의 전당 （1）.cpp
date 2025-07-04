#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> t;
    for(int i = 0; i < score.size(); i++){
        t.push_back(score[i]);
        sort(t.begin(), t.end());
        if(t.size() > k){
            t.erase(t.begin());
        }
        answer.push_back(t[0]);
    }
    
    return answer;
}
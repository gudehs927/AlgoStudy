#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer = {7,7};
    for(int i = 0; i < lottos.size(); ++i){
        for(int j = 0; j< lottos.size(); ++j){
            if(lottos[i] == win_nums[j]){
                answer[0]--;
                answer[1]--;
            }else if(lottos[i] == 0){
                answer[0]--;
                break;
            }
        }
    }
    if(answer[0] == 7){
        answer[0]--;
    }
    if(answer[1]== 7){
        answer[1]--;
    }
    return answer;
}
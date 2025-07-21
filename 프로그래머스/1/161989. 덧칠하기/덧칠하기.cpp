#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int sum = 0;
    for(int i = 0; i< section.size(); i++){
        if(sum < section[i]){
            answer++;
            sum = section[i] +m -1;
        }
    }
    return answer;
}
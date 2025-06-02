#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int k = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]%divisor == 0){
            answer.push_back(arr[i]);
            k++;
        }
    }
    if(answer.size() == 0){
        answer.push_back(-1);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
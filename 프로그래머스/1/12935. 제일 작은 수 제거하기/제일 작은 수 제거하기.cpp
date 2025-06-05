#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int n = arr[0];
    int k = 0;
    for(int i = 0; i < arr.size(); i++){
        if(n > arr[i]){
            n = arr[i];
            k = i;
        }else if(arr.size() == 1){
            answer.push_back(-1);
            return answer;
        }
    }
    arr.erase(arr.begin()+k, arr.begin()+k+1);
    return arr;
}
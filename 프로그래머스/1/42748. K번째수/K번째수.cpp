#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> store;
    int i, j, k;
    for (int t = 0; t < commands.size(); ++t){
        i = commands[t][0];
        j = commands[t][1];
        k = commands[t][2];
        for (int p = 0; p < j-i+1; p++){
            store.push_back(array[i+p-1]);
            sort(store.begin(),store.end());
        }
        answer.push_back(store[k-1]);
        store.clear();
    }
    return answer;
}
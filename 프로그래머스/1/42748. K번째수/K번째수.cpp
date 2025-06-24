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
        vector<int> store(array.begin()+i-1,array.begin()+j);
        sort(store.begin(),store.end());
        answer.push_back(store[k-1]);
    }
    return answer;
}
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> map;
    for (vector<string> pair: clothes) {
        map[pair[1]]++;
    }
    
    int answer = 1;
    
    for (auto it : map) {
        answer *=(it.second +1);
    }
    return answer-1;
}
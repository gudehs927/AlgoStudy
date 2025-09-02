#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> min;
    
    for (const string& key : keymap){
        for (int i = 0; i <key.length(); ++i){
            char c = key[i];
            int count = i + 1;
            
            if (min.find(c) == min.end() || count < min[c]){
                min[c] = count;
            }
        }
    }
    
    for (const string& target : targets){
        int total = 0;
        for (char c : target) {
            if (min.find(c) == min.end()){
                total = -1;
                break;
            }
            total += min[c];
        }
        answer.push_back(total);
    }
    return answer;
}
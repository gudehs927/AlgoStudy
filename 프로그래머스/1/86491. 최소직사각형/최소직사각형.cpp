#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w = 0;
    int h = 0;
    for(int i = 0; i < sizes.size(); ++i){
       sort(sizes[i].begin(), sizes[i].end());
    }
    for(int i = 0; i < sizes.size(); ++i){
        if(w < sizes[i][0]){
            w = sizes[i][0];
        }
        if(h < sizes[i][1]){
            h = sizes[i][1];
        }
    }
    answer = w*h;
    return answer;
}
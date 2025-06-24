#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int N;
bool compare (string a, string b){
    if(a[N] == b[N]){
        return a < b;
    }else{
        return a[N] < b[N];
    }
}

vector<string> solution(vector<string> strings, int n) {
    N = n;
    sort(strings.begin(),strings.end(), compare); 
    return strings;
}
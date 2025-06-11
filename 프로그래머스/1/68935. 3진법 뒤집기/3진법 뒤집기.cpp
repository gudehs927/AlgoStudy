#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;
    int k = 1;
    while(n != 0){
        vec.push_back(n%3);
        n = n/3;
    }
    for(int i=0; i < vec.size();i++)
    {
        answer+=vec[vec.size()-i-1]*(k);
        k*=3;
    }
    return answer;
}
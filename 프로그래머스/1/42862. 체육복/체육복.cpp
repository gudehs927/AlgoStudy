#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> check(n,1);
    for (auto i : lost)
    {
        check[i-1]--;
    }
    for (auto i : reserve)
    {
        check[i-1]++;
    }
    for(int i =0; i < n; i++)
    {
        if(check[i] == 0)
        {
            if(check[i-1] == 2)
            {
                check[i]++;
                check[i-1]--;
            }
            else if(check[i+1]==2)
            {
                check[i]++;
                check[i+1]--;
            }
        }
    }
    for (auto i : check)
    {
        if (i!=0){
            answer++;
        }
    }
    
    return answer;
}
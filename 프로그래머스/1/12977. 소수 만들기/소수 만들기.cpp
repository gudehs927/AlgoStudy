#include <vector>
#include <iostream>
using namespace std;

bool sum1(int n){
     if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}


int solution(vector<int> nums) {
    int answer = 0, sum;
    
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j <nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++){
                sum = nums[i] + nums[j] + nums[k];
                if(sum1(sum)){
                    answer++;
                }
            }
        }
    }
    return answer;
}
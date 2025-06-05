#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int sum = 45;
    for(int i = 0; i < numbers.size(); i++){
        sum -= numbers[i];
    }
    return sum;
}
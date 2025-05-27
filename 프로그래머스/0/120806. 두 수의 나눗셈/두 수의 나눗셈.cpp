#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float a = num1;
    float b = num2;
    int k = a / b * 1000;
    return  k;
}
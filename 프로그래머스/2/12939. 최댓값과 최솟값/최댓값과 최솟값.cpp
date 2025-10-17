#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    stringstream ss(s); 
    vector<int> numbers;
    int num;

    while (ss >> num) {
        numbers.push_back(num);
    }

    int min_val = *min_element(numbers.begin(), numbers.end());
    int max_val = *max_element(numbers.begin(), numbers.end());

    return to_string(min_val) + " " + to_string(max_val);
}
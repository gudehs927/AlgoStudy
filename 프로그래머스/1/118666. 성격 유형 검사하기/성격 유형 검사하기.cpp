#include <string>     
#include <vector>     
#include <unordered_map> 
#include <cmath>      

using namespace std;

string solution(vector<string> survey, vector<int> choices) { 
    unordered_map<char, int> scores{
        {'R',0},{'T',0},{'C',0},{'F',0},
        {'J',0},{'M',0},{'A',0},{'N',0}
    };

    for (size_t i = 0; i < survey.size(); ++i) {
        if (survey[i].size() != 2) continue;
        int choice = choices[i];
        if (choice == 4) continue;

        char disagree = survey[i][0];
        char agree    = survey[i][1];
        int point = std::abs(choice - 4); 

        if (choice < 4) scores[disagree] += point;
        else            scores[agree]    += point;
    }

    string ans;
    ans += (scores['R'] >= scores['T']) ? 'R' : 'T';
    ans += (scores['C'] >= scores['F']) ? 'C' : 'F';
    ans += (scores['J'] >= scores['M']) ? 'J' : 'M';
    ans += (scores['A'] >= scores['N']) ? 'A' : 'N';
    return ans;
}

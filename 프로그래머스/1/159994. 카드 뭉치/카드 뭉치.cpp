#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int card1 = 0;
    int card2 = 0;
    for (int i = 0; i < goal.size(); i++){
        if (cards1[card1] == goal[i]){
            card1++;
        }
        else if(cards2[card2] == goal[i]){
            card2++;
        }
        else{
            return "No";
        }
    }
    return "Yes";
}
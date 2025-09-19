#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> player_positions;

    for (int i = 0; i < players.size(); ++i) {
        player_positions[players[i]] = i;
    }

    for (const string& calling : callings) {
        int current_rank = player_positions[calling];

        string player_in_front = players[current_rank - 1];

        swap(players[current_rank], players[current_rank - 1]);

        player_positions[calling] = current_rank - 1;
        player_positions[player_in_front] = current_rank;
    }

    return players;
}

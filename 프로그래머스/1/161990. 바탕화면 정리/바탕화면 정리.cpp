#include <string>
#include <vector>
#include <climits>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int minRow = INT_MAX, minCol = INT_MAX;
    int maxRow = INT_MIN, maxCol = INT_MIN;

    for (int r = 0; r < wallpaper.size(); r++) {
        for (int c = 0; c < wallpaper[r].size(); c++) {
            if (wallpaper[r][c] == '#') {
                minRow = min(minRow, r);
                minCol = min(minCol, c);
                maxRow = max(maxRow, r);
                maxCol = max(maxCol, c);
            }
        }
    }
    return {minRow, minCol, maxRow + 1, maxCol + 1};
}

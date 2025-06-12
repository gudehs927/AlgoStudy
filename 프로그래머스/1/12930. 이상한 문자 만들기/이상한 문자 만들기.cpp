#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    int idx = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (' ' == s[i])
        {
            idx = 0;
            continue;
        }
        s[i] = (0 == idx % 2) ? toupper(s[i]) : tolower(s[i]);
        idx++;
    }
    return s;
}

#include <bits/stdc++.h>
using namespace std;

int N;
int S[21][21];
bool inStart[21];
int min_diff = INT_MAX;

inline void evaluate() {
    int start = 0, link = 0;
    // 두 사람이 같은 팀일 때만 시너지를 더한다.
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (inStart[i] && inStart[j]) {
                start += S[i][j] + S[j][i];
            } else if (!inStart[i] && !inStart[j]) {
                link += S[i][j] + S[j][i];
            }
        }
    }
    min_diff = min(min_diff, abs(start - link));
}

void dfs(int idx, int picked) {
    // 조기 종료
    if (min_diff == 0) return;

    // 스타트 팀 다 채웠으면 평가
    if (picked == N / 2) {
        evaluate();
        return;
    }

    // 남은 인원으로 팀을 채울 수 없는 경우 가지치기
    int remaining = N - idx;
    int need = (N / 2) - picked;
    if (remaining < need) return;

    for (int i = idx; i < N; ++i) {
        inStart[i] = true;
        dfs(i + 1, picked + 1);
        inStart[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> S[i][j];

    // 대칭 제거: 0번은 항상 스타트 팀에 고정
    inStart[0] = true;
    dfs(1, 1);

    cout << min_diff << '\n';
    return 0;
}

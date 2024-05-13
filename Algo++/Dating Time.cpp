#include <bits/stdc++.h>
using namespace std;

int solve(string time1, string time2, int angle) {
    int hour1 = stoi(time1.substr(0, 2));
    int minute1 = stoi(time1.substr(3));
    int start = hour1 * 60 + minute1;

    int hour2 = stoi(time2.substr(0, 2));
    int minute2 = stoi(time2.substr(3));
    int end = hour2 * 60 + minute2;

    vector<int> k;
    int time = 0;
    if (angle == 90) {
        time += 180;
        while (time / 11 <= end) {
            k.push_back(time);
            time += 360;
        }
    } else if (angle == 180) {
        time += 360;
        while (time / 11 <= end) {
            k.push_back(time);
            time += 720;
        }
    } else {
        while (time / 11 <= end) {
            k.push_back(time);
            time += 720;
        }
    }

    int total = 0;
    for (int num : k) {
        if (start <= num / 11 && num / 11 <= end) {
            total++;
        }
    }
    return total;
}

int main() {
    int R;
    cin >> R;
    for (int i = 0; i < R; i++) {
        string t1, t2;
        int angle;
        cin >> t1 >> t2 >> angle;
        cout << solve(t1, t2, angle) << endl;
    }
    return 0;
}


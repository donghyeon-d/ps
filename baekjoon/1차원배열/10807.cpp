#include <iostream>

using namespace std;

int main() {
    int list[201] = {0,};
    int N(0), tmp(0);
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        if (tmp < 0)
            tmp += 201;
        list[tmp] += 1;
    }
    cin >> tmp;
    if (tmp < 0)
        tmp += 201;
    cout << list[tmp];
}

// map 사용해봄

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> cnt;
    int N, tmp;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        if (cnt.find(tmp) == cnt.end())
            cnt[tmp] = 1;
        else
            cnt[tmp] = cnt[tmp] + 1;
    }
    cin >> tmp;
    if (cnt.find(tmp) == cnt.end())
        cout << 0;
    else
        cout << cnt[tmp];
}
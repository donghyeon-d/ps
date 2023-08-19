#include <iostream>

using namespace std;

int main()
{
    long long N = 0, B = 0, t = 0, num = 0;
    string ret;

    cin >> N;
    cin >> B;
    t = B;
    while (N >= t) {
        t *= B;
    }

    while (N > 0) {
        t /= B;
        num = N / t;

        if (num > 9) {
            ret += num - 10 + 'A';
        } else {
            ret += num + '0';
        }

        if (N % t == 0) {
            while (t > 1) {
                ret += '0';
                t /= B;
            }
            break;
        }

        N -= num * t;
        if (N == 0) {
            ret += '0';
        }
    }

    cout << ret << "\n";
}

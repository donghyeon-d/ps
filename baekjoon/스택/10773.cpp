#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int K, num, sum = 0;
    vector<int> v;

    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> num;

        if (num == 0)
            v.pop_back();
        else
            v.push_back(num);
    }

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        sum += *it;
    }
    
    cout << sum << endl;
}
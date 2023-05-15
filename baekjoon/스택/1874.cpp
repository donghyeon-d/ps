#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, num, curr = 1;
    vector<int> v, val;
    vector<char> oper;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0 && v[i] < val.back())
            break ;
        while (curr <= v[i])
        {
            val.push_back(curr);
            oper.push_back('+');
            curr++;
        }

        if (val.back() == v[i])
        {
            val.pop_back();
            oper.push_back('-');
        }
    }

    if (oper.size() == n * 2)
    {
        for (int i = 0; i < oper.size(); i++)
        {
            cout << oper[i] << '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
    }
}
#include <iostream>
#include <vector>
#include <string>


void push(std::vector<int> &v, int x)
{
    v.push_back(x);
}

void pop(std::vector<int> &v)
{
    if (v.begin() == v.end())
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << v.back() << std::endl;
        v.pop_back();
    }
}


void size(std::vector<int> &v)
{
    std::cout << v.size() << std::endl;
}

void empty(std::vector<int> &v)
{
    if(v.empty())
        std::cout << 1 << std::endl;
    else
        std::cout << 0 << std::endl;
}

void top(std::vector<int> &v)
{
    if (v.begin() == v.end())
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << v.back() << std::endl;
    }
}

int main()
{

    std::vector<int> v;
    int N, num;
    std::string func;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> func;
        if (func == "push")
        {
            std::cin >> num;
            push(v, num);
        }
        else if (func == "pop")
        {
            pop(v);
        }
        else if (func == "size")
            size(v);
        else if (func == "empty")
            empty(v);
        else if (func == "top")
            top(v);
    }
}

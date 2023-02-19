#include <iostream>
#include <vector>

const int N = 40;

// inline sum function, take 2 parameters
// sum as the result of sum, data as input array
inline void sum(int& sum, std::vector<int> data)
{
    for (int i = 0; i < data.size(); ++i)
        sum += data[i];
}

int main()
{
    // init result as 0
    int accum = 0;
    std::vector<int> data;
    // init input array from 0 to N-1
    for (int i = 0; i < N; ++i)
        data.push_back(i);
    sum(accum, data);
    std::cout << "sum is " << accum << std::endl;
    return 0;
}
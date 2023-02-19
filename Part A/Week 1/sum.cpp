#include <iostream>
#include <vector>

template <class T>
T sum(std::vector<T> vec)
{
    T sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    return sum;
}
// summing n numbers
int main()
{
    std::vector<int> vec = {1,2,3,4,5};
    int s = sum(vec);
    std::cout << s << std::endl;
}
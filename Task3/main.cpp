#include "MyAllocator.h"
#include <map>
#include "MyVector.h"

int main() {
    std::map<int, int, std::less<int>, MyAllocator<std::pair<const int, int>, 11>> m = {
            {1, 5},
            {2, 3},
            {3, 5},
    };

    MyVector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    MyVector<int, MyAllocator<int, 6>> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
}
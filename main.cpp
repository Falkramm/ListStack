#include <iostream>
#include "ListStack.h"
#include <string>
int main() {
ListStack<int> arr;
int n;
std::cin >> n;
for(size_t i=0;i<n;i++)
{
    int x;
    std::cin >> x;
    arr.push(x);
}
while(!arr.empty())
{
    std::cout << arr.top() << ' ';
    arr.pop();
}
    std::cout << "\n";
ListStack<std::string> arr1;
std::cin >> n;
for(size_t i=0;i<n;i++)
{
    std::string str;
    std::cin >> str;
    arr1.push(str);
}

while(!arr1.empty()){
    std::cout << arr1.top() << ' ';
    arr1.pop();
}

}

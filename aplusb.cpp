#include <iostream>
int sum(int first, int second) {
return first + second;
}
int main() {
int a = 0;
int b = 0;
std::cin >> a;
std::cin >> b;
std::cout << sum(a, b);
return 0;
}

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::max;
long long int MaxPairwiseProduct(const vector<int>& numbers) {
int product = 0;
long long int n = numbers.size();
for (long long int i = 0; i < n; ++i) {
for (long long int j = i + 1; j < n; ++j) {
product = max(product, numbers[i] * numbers[j]);
}
}
return product;
}
int main() {
long long int n;
cin >> n;
vector<long long int> numbers(n);
for (long long int i = 0; i < n; ++i) {
cin >> numbers[i];
}
int product = MaxPairwiseProduct(numbers);
cout << product << "\n";
return 0;
}

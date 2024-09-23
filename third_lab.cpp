#include <iostream>
using std::sqrt;
using std::cin;
using std::endl;

int main(){
    // variant 7
    unsigned int x{}; int i{};
    cin >> x >> i;
    std::cout << (x | (1 << i)) << endl;
}
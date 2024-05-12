#include <iostream>
#include <vector>
#include <cmath>
#include <locale.h>
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    int sqrtNum = std::sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

std::vector<int> getPrimesInRange(int min, int max) {
    std::vector<int> primes;
    for (int i = min; i <= max; i++) {
        if (isPrime(i)) primes.push_back(i);
    }
    return primes;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int min = 11;
    int max = 20;
    std::vector<int> primes = getPrimesInRange(min, max);
    std::cout << "Простые числа в диапазоне от " << min << " до " << max << ":\n";
    for (int prime : primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;
    return 0;
}

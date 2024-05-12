#include <iostream>
#include <vector>
#include <algorithm>

int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

std::vector<int> findDivisors(int n) {
    std::vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

std::vector<int> commonDivisors(std::vector<int> arr) {
    int g = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        g = greatestCommonDivisor(g, arr[i]);
    }
    return findDivisors(g);
}

std::vector<int> userInput() {
    std::vector<int> nums;
    int num;
    std::cout << "Введите числа (0 для завершения ввода):\n" ;
    while (std::cin >> num && num != 0) {
        nums.push_back(num);
    }
    return nums;
}

int main() {
    std::vector<int> arr = userInput();
    std::vector<int> result = commonDivisors(arr);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}

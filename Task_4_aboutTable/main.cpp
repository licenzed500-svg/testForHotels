//В УСЛОВИИ ЗАДАЧИ БЫЛО СКАЗАНО "РЕШИТЬ ЧЕРЕЗ МЕТОД"


#include <iostream>
#include <locale.h>
class MultiplicationTable {
public:
    void print(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                std::cout << i * j << "\t";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    MultiplicationTable table;
    table.print(num);
    return 0;
}

#include <iostream>
#include <chrono>
#include <thread>

void print_numbers() {
    for (int i = 1; i <= 1000000; ++i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::microseconds(10)); // Small delay
    }
}

int main() {
    print_numbers();
    return 0;
}

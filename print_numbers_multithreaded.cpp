#include <iostream>
#include <thread>
#include <chrono>

void print_numbers(const std::string& thread_name) {
    for (int i = 1; i <= 1000000; ++i) {
        std::cout << thread_name << ": " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::microseconds(10)); // Small delay
    }
}

int main() {
    // Create two threads
    std::thread thread1(print_numbers, "Thread-1");
    std::thread thread2(print_numbers, "Thread-2");

    // Wait for both threads to finish
    thread1.join();
    thread2.join();

    std::cout << "Both threads finished execution" << std::endl;

    return 0;
}

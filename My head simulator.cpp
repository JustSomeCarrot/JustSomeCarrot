#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <atomic>
using namespace std;

int main() {
    atomic<bool> stop(false);
    
    thread outputThread([&stop] {
        while (!stop) {
            for (int i = 0; i < 10; i++) {
              cout << "AHAHAHAHAHAAHAAHAAAHAHAHAHAHAHAA" << endl;
                this_thread::sleep_for(chrono::milliseconds(100));
            }
        }
    });
    
    cin.get();
    
    stop = true;
    outputThread.join();
    
    return 0;
}
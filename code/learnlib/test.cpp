#include <iostream>
#include <string>
#include "unite_time.h"
#include <unistd.h>

int main() {
    std::cout << "test static lib" << std::endl;
    while(true) {
    std::cout << get_time() << std::endl;
    std::cout << "sleep 1s" <<std::endl;
    sleep(1); //sleep 200ns
    }
    return 0;

}

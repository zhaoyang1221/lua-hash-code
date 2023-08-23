#include <iostream>
#include "src/hash_code.h"

int main() {
    std::string txt = "哈哈哈，你好";
    int32_t code = hash_code(txt);
    std::cout << code << std::endl;
    return 0;
}

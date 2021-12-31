#include "CColor.h"

void CColor::print(const char* text, const std::string& format) {
    std::cout << format << text << RESET;
}

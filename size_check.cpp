#include <iostream>


void checkBool() {

    std::cout <<"[+] bool\t" << "|" << sizeof(bool) << std::endl;
    std::cout << "- - - - -"<< std::endl;

}

void checkChar() {

    std::cout << "[+] char\t" <<"|" << sizeof(char) << std::endl;
    std::cout << "[+] wchar_t\t" <<"|" << sizeof(wchar_t) << std::endl;
    std::cout << "[+] char16_t\t" <<"|" << sizeof(char16_t) << std::endl;
    std::cout << "[+] char32_t\t" <<"|" << sizeof(char32_t) << std::endl;
    std::cout << "- - - - -"<< std::endl;

}

void checkInt() {

    std::cout << "[+] short\t" <<"|" << sizeof(short) << std::endl;
    std::cout << "[+] int\t" <<"|" << sizeof(int) << std::endl;
    std::cout << "[+] long\t" <<"|" << sizeof(long) << std::endl;
    std::cout << "[+] long long\t" <<"|" << sizeof(long long) << std::endl;
    std::cout << "- - - - -"<< std::endl;
}

void checkFloat() {

    std::cout << "[+] float\t" <<"|" << sizeof(float) << std::endl;
    std::cout << "[+] double\t" <<"|" << sizeof(double) << std::endl;
    std::cout << "[+] long double\t" <<"|" << sizeof(long double) << std::endl;
}

int main() {
    std::cout << "Types\t" <<"|" << "Sizes"<< std::endl;
    std::cout << "* * * * * * * * * *"<< std::endl;
    checkBool();
    checkChar();
    checkInt();
    checkFloat();

    return 0;
}
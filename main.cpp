#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

inline uint64_t strLen(const char* str)
{
    uint64_t len = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

void replaceDotsWithExclamation(char* str) {
    uint64_t len = strLen(str);

    for (int i = 0; i < len; ++i) {
        if (str[i] == '.') {
            str[i] = '!';
        }
    }
}

int main()
{
    const char pattern[] = ",.!?#:;() {} [] @* \'\"_-";
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    gets_s(str, size);

    replaceDotsWithExclamation(str);

    cout << "String after replacing dots: " << str << endl;

    return 0;
}

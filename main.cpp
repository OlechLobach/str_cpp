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

void removeAllOccurrences(char* str, char ch) {
    uint64_t len = strLen(str);
    int shift = 0;

    for (int i = 0; i < len; ++i) {
        if (str[i] == ch) {
            shift++;
        }
        else {
            str[i - shift] = str[i];
        }
    }

    str[len - shift] = '\0';  
}

int main()
{
    const char pattern[] = ",.!?#:;() {} [] @* \'\"_-";
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    gets_s(str, size);

    char ch;
    cout << "Enter the character to remove: ";
    cin >> ch;

    removeAllOccurrences(str, ch);

    cout << "String after removing character: " << str << endl;

    return 0;
}

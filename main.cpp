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

void removeCharacterAtIndex(char* str, int index) {
    uint64_t len = strLen(str);

    if (index >= 0 && index < len) {
        for (int i = index; i < len - 1; ++i) {
            str[i] = str[i + 1];
        }
        str[len - 1] = '\0'; 
    }
}

int main()
{
    const char pattern[] = ",.!?#:;() {} [] @* \'\"_-";
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    gets_s(str, size);

    int index;
    cout << "Enter the index of the character to remove: ";
    cin >> index;

    removeCharacterAtIndex(str, index);

    cout << "String after removing character: " << str << endl;

    return 0;
}

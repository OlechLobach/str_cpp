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

void insertCharacterAtPosition(char* str, int position, char ch) {
    uint64_t len = strLen(str);

    if (position >= 0 && position <= len) {
        for (int i = len; i >= position; --i) {
            str[i + 1] = str[i];
        }
        str[position] = ch;
    }
}

int main()
{
    const char pattern[] = ",.!?#:;() {} [] @* \'\"_-";
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    gets_s(str, size);

    int position;
    cout << "Enter the position to insert the character: ";
    cin >> position;

    char ch;
    cout << "Enter the character to insert: ";
    cin >> ch;

    insertCharacterAtPosition(str, position, ch);

    cout << "String after inserting character: " << str << endl;

    return 0;
}

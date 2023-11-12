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

int countOccurrences(const char* str, char ch) {
    int count = 0;
    uint64_t len = strLen(str);
    int i = 0;

    while (i < len) {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    return count;
}

int main()
{
    const char pattern[] = ",.!?#:;() {} [] @* \'\"_-";
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    gets_s(str, size);

    char searchChar;
    cout << "Enter the character to count: ";
    cin >> searchChar;

    
    int occurrences = countOccurrences(str, searchChar);

    cout << "Occurrences of '" << searchChar << "': " << occurrences << endl;

    return 0;
}

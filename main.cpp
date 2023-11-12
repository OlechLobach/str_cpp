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

bool isPalindrome(const char* str)
{
    uint64_t len = strLen(str);
    for (size_t i = 0; i < len / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[len - i - 1]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const char pattern[] = ",.!?#:;() {} [] @* \'\"_-";
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    gets_s(str, size);

    
    if (isPalindrome(str))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

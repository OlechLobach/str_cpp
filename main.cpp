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

void countWords(const char* str)
{
    uint64_t wordCount = 0;
    bool inWord = false;

    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            inWord = false;
        }
        else if (!inWord)
        {
            inWord = true;
            wordCount++;
        }
    }

  
    cout << "Word count: " << wordCount << endl;
}

int main()
{
    const char pattern[] = ",.!?#:;() {} [] @* \'\"_-";
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    gets_s(str, size);

    
    countWords(str);

    return 0;
}

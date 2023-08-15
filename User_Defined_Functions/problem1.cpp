#include <iostream>
#include <string>

bool isPalindrome(std::string str);

int main()
{
    std::string string;
    string = "madam";

    //isPalindrome(string);

    std::cout << "Is this a palindrome? " << isPalindrome(string);
    return 0;
}

bool isPalindrome(std::string str)
{
    int length = str.length();

    for (int i = 0; i < length / 2; i++)
        if(str[i] != str[length - 1 - i])
            return false;

    return true;
}


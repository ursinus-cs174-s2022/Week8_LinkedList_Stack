#include <iostream>
#include "linkedlist.h"

using namespace std;

int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "Expecting a command line string argument\n";
        return 1;
    }
    char* s = argv[1];
    if (isPalindrome(s)) {
        cout << s << " is a palindrome\n";
    }
    else {
        cout << s << " is not a palindrome\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char input;

    // Get user input for the character
    cout << "Enter a character: ";
    cin >> input;

    // Use a switch statement to check if the character is a vowel
    switch (input) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << input << " is a vowel." << endl;
            break;
        default:
            cout << input << " is not a vowel." << endl;
    }

    return 0;
}


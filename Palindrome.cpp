// This is a simple program displaying how to find a palindrome

#include <iostream>

using namespace std;

int main()
{

    int digit = 0;
    int numberToCheck = 0;
    int reverseNumber = 0;

    cout << "Enter a number to check if its a palindrome;\n**";
    cin >> numberToCheck;
    int originalNumber = numberToCheck;
    do
    {
        digit = numberToCheck % 10;
        reverseNumber = (reverseNumber * 10) + digit;
        numberToCheck /= 10;
    } while (numberToCheck != 0);

    if (reverseNumber == originalNumber)
    {
        cout << "The number is in fact a palindrome\n"
             << "Forward: " << originalNumber << endl
             << "Backwards: " << reverseNumber << endl;
    }
    else
    {
        cout << "The number is not a palindrome\n"
             << "Forward: " << originalNumber << endl
             << "Backward: " << reverseNumber << endl;
    }
}

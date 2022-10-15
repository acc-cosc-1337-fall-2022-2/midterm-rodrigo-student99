#include "question1.h"
#include <iostream>

using std::cout; using std::cin;
int main()
{
    bool has_exited = false;

    while (has_exited == false)
    {
        string result;
        int user_input;
        char exit_input;

        cout << "\nHello user, please input an int value here:";
        cin >> user_input;
        while (user_input > 512 || user_input < 1)
        {
            cout << "\nUH-OH, seems like the value you have typed in is not valid. Please type an int betwee 1-512 here:";
            cin >> user_input;
        }
        
        result = decimal_to_hex(user_input);
        cout << "\nThe hexadecimal result for the int you put in is: " << result;

        cout << "\nWould you like to exit the program? y/n:";
        cin >> exit_input;

        if (toupper(exit_input) == 'Y')
        {
            has_exited = true;
        }
    }
    


    return 0;
}
//This is a test to make sure my commits are showin up in my github!
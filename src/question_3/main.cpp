#include "question3.h"
#include<iostream>
#include <cctype>
using std::cout; using std::cin;


int main()
{
    bool has_exited = false;
    
    while (has_exited == false)
    {
        cout << "\nHello user, how many cookies do you want to make? Type here: ";
        int cooks;
        cin >> cooks;

        while (cooks < 0)
        {
            cout << "\nSeems like that was invalid input. Please type in a positive number here: ";
            cin >> cooks;
        }

        vector<double> results;
        results = get_cookie_ingredients(cooks);

        cout << "\nCups of sugar: "<< results[0];
        cout << "\nCups of butter: "<< results[1];
        cout << "\nCups of flour: "<< results[2];

        char exit_var;
        cout <<"\nWould you like to input another cookie amount? y/n:";
        cin >> exit_var;

        if (toupper(exit_var) == 'N' )
        {
            has_exited = true;
        }


    } 
    
    return 0;
}
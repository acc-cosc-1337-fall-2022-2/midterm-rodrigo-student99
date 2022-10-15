#include "question2.h"
#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string;

int main()
{
    cout<<"\nHello user, do you want to roll the dice? type y/n here:";
    string decision;
    cin >> decision;
    while (decision == "y" || decision == "Y")
    {
        int resultado;
        resultado = roll_die();
        cout <<"\nThe result of the dice roll was: "<< resultado;
        cout <<"\nDo you want to reroll the dice? y/n:";
        cin >> decision;
    }
    return 0;
}
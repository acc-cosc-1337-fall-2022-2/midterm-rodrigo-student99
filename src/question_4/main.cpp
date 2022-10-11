#include "question4.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
    bool has_exited = false;

    while (has_exited == false)
    {
        int widgets_sold;
        cout << "\nHello user, how many widgets have you sold? Type here: ";
        cin >> widgets_sold;
        
        while (widgets_sold < 0)
        {
            cout << "\nRuh-Roe, that input is invalid. Please type in a positive int here: ";
            cin >> widgets_sold;
        }

        int points_earned;
        points_earned = get_earned_points(widgets_sold);

        cout << "\nPoints Earned: " << points_earned;

        char response;
        cout << "\nDo you want to exit the program? y/n: ";
        cin >> response;

        if (toupper(response) == 'Y')
        {
            has_exited = true;
        }
    }
    return 0;
}
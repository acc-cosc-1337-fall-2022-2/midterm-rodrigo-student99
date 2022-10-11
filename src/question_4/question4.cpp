//
bool test_config()
{
    return true;
}
#include "question4.h"

int get_earned_points(int sold)
{
    if (sold <= 5)
    {
        return sold;
    }
    else if (sold <= 10)
    {
        return sold * 5;
    }
    else if (sold <= 15)
    {
        return sold * 10;
    }
    else
    {
        return sold * 15;
    }
}
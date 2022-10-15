#include "question2.h"
#include <cstdlib>
#include <ctime>

using std::rand;
bool test_config()
{
    return true;
}

int roll_die()
{
    srand(time(0));
    return (rand() % 6) + 1;
}

//function loops 11 times to ensure dice roll > 0 and < 7
bool roll_die_validator()
{
    bool is_valid = true;
    for (int i = 0; i < 11; i++)
    {
        int result = roll_die();
        if (result > 6 || result < 1)
        {
            is_valid = false;
        }
    }
    return is_valid;
}
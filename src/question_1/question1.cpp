#include "question1.h"

bool test_config()
{
    return true;
}

string decimal_to_hex(int num)
{
    string str;
    int iter = -1;

    while (num > 0)
    {
        int temp = 0;
        int container;

        temp = num % 16;

        //Loop to see whether to append a num element to string, if not num then append letter ele
        if (temp < 10)
        {
            container = temp + 48;
            str.push_back(container);
            iter += 1;
        }
        else 
        {
            container = temp + 55;
            str.push_back(container);
            iter += 1;
        }

        num = num / 16;
    }

    //here is the logic to rotate string to get correct final result
    string final_result;
    
    while (iter >= 0)
    {
        final_result.push_back(str[iter]);
        iter -= 1;
    }



    return final_result;
}
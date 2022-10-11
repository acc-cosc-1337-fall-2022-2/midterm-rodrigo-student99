#include "question3.h"

bool test_config()
{
    return true;
}

const double BASE_COOKIE_COUNT = 48;
vector<double> get_cookie_ingredients(int cookies)
{
    vector<double> final_ingredients_list;

    double cups_of_sugar;
    cups_of_sugar = (cookies / BASE_COOKIE_COUNT) * 1.5;
    final_ingredients_list.push_back(cups_of_sugar);

    double cups_of_butter;
    cups_of_butter = (cookies / BASE_COOKIE_COUNT);
    final_ingredients_list.push_back(cups_of_butter);

    double cups_of_flour;
    cups_of_flour = (cookies / BASE_COOKIE_COUNT) * 2.75;
    final_ingredients_list.push_back(cups_of_flour);

    return final_ingredients_list;
}
    
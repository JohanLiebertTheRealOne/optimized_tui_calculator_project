#pragma once
#include <iostream>
#include <cmath>
#include <tuple>

namespace _time {
    inline  int increase_scale(int      time_unit)
    {
        return  (60*time_unit);
    }
    inline  int decrease_scale(int      time_unit)
    {
        return  (60*time_unit);
    }
    inline  int hours_in_seconds(void)
    {
        int hours;

        std::cout << "Enter hours";
        std::cin >> hours;
        return  (increase_scale(increase_scale(hours)));
    }
    inline  int seconds_in_hours(void)
    {
        int seconds;

        std::cout << "Enter seconds";
        std::cin >> seconds;
        return  (decrease_scale(decrease_scale(seconds)));
    }
}
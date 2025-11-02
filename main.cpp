#include "quad.hpp"
#include "time.hpp"

int main(void)
{
    int user_ask;
    int USR_TOP;

    std::cout << "What do you want to calculate ? \n [1] Second Degree Equation \n [2] Time \n [3] Sequences \n";
    std::cin >> user_ask;
    switch(user_ask)
    {
        case 1:
            quad::second_degree_equation_solver();
            break;
        case 2:
            std::cout << "What do you want to calculate ? \n [1] Hours in seconds \n [2] Seconds in hours";
            std::cin >> USR_TOP;
            switch(USR_TOP)
            {
                case 1:
                    int hours_in_seconds;
                    
                    hours_in_seconds = _time::hours_in_seconds();
                    std::cout << hours_in_seconds;
                    break;
                case 2:
                    int seconds_in_hours;

                    seconds_in_hours = _time::seconds_in_hours();
                    std::cout << seconds_in_hours;
                    break;
            }
        /*IMPLEMENTER LES SUITES*/
    }
}
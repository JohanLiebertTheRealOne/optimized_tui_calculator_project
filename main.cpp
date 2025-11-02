#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

int calculate_delta(int a, int b, int c)
{
    int delta;

    delta = pow(b,2) -4 *(a*c);
    return (delta);
}

tuple<float, float> find_roots(int a, int b, int delta)
{
    float x1, x2;
    tuple<float, float> roots;

    x1 = (-b-sqrt(delta))/(2*a);
    x2 = (-b+sqrt(delta))/(2*a);
    if (x1==-0)
        x1 = 0;
    if (x2==-0)
        x2 = 0;
    roots = make_tuple(x1, x2);
    return (roots);
}

void    second_degree_equation_solver(void)
{
    int a;
    int b;
    int c;
    int delta;

    cout << "Welcome to the second degree equation solver ! \n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    delta = calculate_delta(a,b,c);
    cout << "Delta = " << delta << '\n';

    tuple<float, float>roots = find_roots(a, b, delta);
    cout << "x1 = " << get<0>(roots) << ", \n" << "x2 = " << get<1>(roots) << '\n';
}

int main(void)
{
    int user_ask;

    cout << "What do you want to calculate ? \n [1] Second Degree Equation \n";
    cin >> user_ask;
    switch(user_ask)
    {
        case 1:
            second_degree_equation_solver();
    }
}
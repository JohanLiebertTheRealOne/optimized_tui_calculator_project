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
    roots = make_tuple(x1, x2);
    return (roots);
}

int main(void)
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
#pragma once
#include <iostream>
#include <cmath>
#include <tuple>

namespace quad {

inline int calculate_delta(int a, int b, int c)
{
    // avoid pow on ints; it's simpler and exact
    return b * b - 4 * a * c;
}

inline std::tuple<float, float> find_roots(int a, int b, int delta)
{
    float x1, x2;

    // delta is int; cast for sqrt with floats
    float s = std::sqrt(static_cast<float>(delta));
    x1 = (-b - s) / (2.0f * a);
    x2 = (-b + s) / (2.0f * a);

    // normalize negative zero to zero for pretty printing
    if (std::fpclassify(x1) == FP_ZERO) x1 = 0.0f;
    if (std::fpclassify(x2) == FP_ZERO) x2 = 0.0f;

    return std::make_tuple(x1, x2);
}

inline void second_degree_equation_solver()
{
    int a, b, c;

    std::cout << "Welcome to the second degree equation solver ! \n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    int delta = calculate_delta(a, b, c);
    std::cout << "Delta = " << delta << '\n';

    if (delta < 0) {
        std::cout << "No real roots (delta < 0).\n";
        return;
    }

    auto roots = find_roots(a, b, delta);
    std::cout << "x1 = " << std::get<0>(roots) << ", \n"
              << "x2 = " << std::get<1>(roots) << '\n';
}

// inline  std::tuple<bool, bool, bool> find_

}

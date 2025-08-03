// File - src\components\Product.cpp
#include "Product.hpp"

Product::Product(std::string set_name, double set_price)
    : name(std::move(set_name)), price(std::move(set_price)) {}

const std::string &Product::getName() const
{
    return name;
}
template <>
double Product::getPrice<double>()
{
    return price;
}

template <>
std::string Product::getPrice<std::string>()
{
    std::ostringstream oss;
    oss.precision(2);
    oss << "\x9C" << std::fixed << price;
    return oss.str();
}

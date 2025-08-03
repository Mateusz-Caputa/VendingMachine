// File - src\components\Product.cpp
#include "Product.hpp"

Product::Product(std::string set_name, double set_price)
    : name(std::move(set_name)), price(std::move(set_price)) {}

const std::string &Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}


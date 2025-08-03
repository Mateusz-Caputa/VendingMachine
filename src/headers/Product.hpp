// File - src\headers\Product.hpp

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>
#include <sstream>

class Product
{
public:
    Product() = default;
    Product(std::string set_name, double set_price);

    const std::string &getName() const;

    template <typename T>
    T getPrice();

private:
    std::string name;
    double price = 0.0;
};

template <>
double Product::getPrice<double>();

template <>
std::string Product::getPrice<std::string>();

#endif
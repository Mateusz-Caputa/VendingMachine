// File - src\headers\Product.hpp

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

class Product
{
public:
    Product() = default;
    Product(std::string set_name, double set_price);

    const std::string &getName() const;
    double getPrice() const;

private:
    std::string name;
    double price = 0.0;
};

#endif
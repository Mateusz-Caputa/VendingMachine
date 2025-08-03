// File - src\headers\ProductSlot.hpp

#ifndef PRODUCTSLOT_HPP
#define PRODUCTSLOT_HPP

#include <optional>

#include "Product.hpp"

class ProductSlot
{
public:
    ProductSlot() = default;
    ProductSlot(const Product &set_product);

    void setProduct(const Product &set_product);
    const std::optional<Product> &getProduct() const;

    bool isEmpty() const;
    void clear();

private:
    std::optional<Product> product;
};

#endif
// File - src\components\ProductSlot.cpp

#include "ProductSlot.hpp"

ProductSlot::ProductSlot(const Product &set_product) : product(set_product) {}

void ProductSlot::setProduct(const Product &set_product)
{
    product = set_product;
}

const std::optional<Product> &ProductSlot::getProduct() const
{
    return product;
}

bool ProductSlot::isEmpty() const
{
    return !product.has_value();
}

void ProductSlot::clear()
{
    return product.reset();
}
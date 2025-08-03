// File - src\components\VendingSlot.hpp

#include "VendingSlot.hpp"

VendingSlot::VendingSlot(int set_rowLabel, std::string set_columnLabel, int set_capacity)
    : rowLabel(std::move(set_rowLabel)), columnLabel(std::move(set_columnLabel)), capacity(set_capacity) {}

const int &VendingSlot::getRowLabel() const
{
    return rowLabel;
}

const std::string &VendingSlot::getColumnLabel() const
{
    return columnLabel;
}

std::string VendingSlot::getLabel() const
{
    return columnLabel + std::to_string(rowLabel);
}

int VendingSlot::getCapacity() const
{
    return capacity;
}

int VendingSlot::addProduct(const Product &product)
{
    for (size_t i = 0; i < productSlots.size(); ++i)
    {
        if (productSlots[i].isEmpty())
        {
            productSlots[i].setProduct(product);
            return static_cast<int>(i);
        }
    }

    return -1;
}

int VendingSlot::addProduct(const Product &product, size_t index)
{
    if (index >= productSlots.size())
    {
        return -1;
    }

    if (productSlots[index].isEmpty())
    {
        productSlots[index].setProduct(product);

        return index;
    }

    return -1;
}

std::optional<Product> VendingSlot::getFrontProduct() const
{
    for (auto &productSlot : productSlots)
    {
        if (!productSlot.isEmpty())
        {

            return productSlot.getProduct();
        }
    }

    return std::nullopt;
}
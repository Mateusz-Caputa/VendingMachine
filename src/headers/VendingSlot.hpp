// File - src\headers\VendingSlot.hpp

#ifndef VENDINGSLOT_HPP
#define VENDINGSLOT_HPP

#include <string>
#include <deque>

#include "ProductSlot.hpp"

class VendingSlot
{
public:
    VendingSlot() = default;
    VendingSlot(int set_rowLabel, std::string set_columnLabel, int set_capacity);

    const int &getRowLabel() const;
    const std::string &getColumnLabel() const;
    std::string getLabel() const;

    int getCapacity() const;

private:
    int rowLabel = -1;
    std::string columnLabel = "";

    int capacity;
    std::deque<ProductSlot> productSlots = std::deque<ProductSlot>(capacity);
};

#endif
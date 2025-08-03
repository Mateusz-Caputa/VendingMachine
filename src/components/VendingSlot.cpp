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

int VendingSlot::getCapacity() const {
    return capacity;
}
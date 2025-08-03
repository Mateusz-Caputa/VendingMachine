// File - src\components\VendingMachine.cpp

#include "VendingMachine.hpp"

VendingMachine::VendingMachine(std::string set_name, std::vector<int> set_rowLabels, std::vector<std::string> set_columnLabels, int set_slotProductCapacity)
    : name(set_name), rowLabels(std::move(set_rowLabels)), columnLabels(std::move(set_columnLabels)), slotProductCapacity(set_slotProductCapacity)
{
    for (const auto &rowLabel : rowLabels)
    {
        for (const auto &columnLabel : columnLabels)
        {
            std::string vendingSlotLabel = columnLabel + std::to_string(rowLabel);
            vendingSlots[vendingSlotLabel] = VendingSlot(rowLabel, columnLabel, slotProductCapacity);
        }
    }
}

const std::string &VendingMachine::getName() const
{
    return name;
}

const std::vector<int> &VendingMachine::getRowLabels() const
{
    return rowLabels;
}

const std::vector<std::string> &VendingMachine::getColumnLabels() const
{
    return columnLabels;
}

const std::unordered_map<std::string, VendingSlot> &VendingMachine::getVendingSlots() const
{
    return vendingSlots;
}

VendingSlot *VendingMachine::getVendingSlot(const std::string &vendingSlotLabel)
{
    auto it = vendingSlots.find(vendingSlotLabel);
    if (it != vendingSlots.end())
    {
        return &it->second;
    }

    return nullptr;
}

int VendingMachine::getSlotProductCapacity() const
{
    return slotProductCapacity;
}

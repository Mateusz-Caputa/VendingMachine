// File - src\headers\VendingMachine.hpp

#ifndef VENDINGMACHINE_HPP
#define VENDINGMACHINE_HPP

#include <string>
#include <vector>
#include <unordered_map>

#include "VendingSlot.hpp"

class VendingMachine
{
public:
    VendingMachine(std::vector<int> set_rowLabels, std::vector<std::string> set_columnLabels, int set_slotProductCapacity);

    const std::vector<int> &getRowLabels() const;
    const std::vector<std::string> &getColumnLabels() const;

    const std::unordered_map<std::string, VendingSlot> &getVendingSlots() const;
    VendingSlot getVendingSlot(const std::string &slotLabel) const;

    int getSlotProductCapacity() const;

private:
    int slotProductCapacity = 12;
    std::vector<int> rowLabels;
    std::vector<std::string> columnLabels;

    std::unordered_map<std::string, VendingSlot> vendingSlots;
};

#endif
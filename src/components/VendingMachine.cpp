// File - src\components\VendingMachine.cpp

#include "VendingMachine.hpp"

VendingMachine::VendingMachine(const std::vector<int>& set_rowLabels, const std::vector<std::string> set_columnLabels): rowLabels(set_rowLabels), columnLabels(set_columnLabels){}

const std::vector<int>& VendingMachine::getRowLabels() const {
    return rowLabels;
}

const std::vector<std::string>& VendingMachine::getColumnLabels() const {
    return columnLabels;
}


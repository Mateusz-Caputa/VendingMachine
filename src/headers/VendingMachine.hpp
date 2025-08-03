// File - src\headers\VendingMachine.hpp

#ifndef VENDINGMACHINE_HPP
#define VENDINGMACHINE_HPP

#include <string>
#include <vector>

class VendingMachine{
public:
    VendingMachine(const std::vector<int>& set_rowLabels, const std::vector<std::string> set_columnLabels);

    const std::vector<int>& getRowLabels() const;
    const std::vector<std::string>& getColumnLabels() const;
private:
    std::vector<int> rowLabels;
    std::vector<std::string> columnLabels;
};
#endif
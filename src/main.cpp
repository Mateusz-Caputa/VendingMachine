// File - src\main.cpp

#include <iostream>

#include "VendingMachine.hpp"

int main()
{
  std::vector<int> rowLabels = {1, 2, 3, 4};
  std::vector<std::string> columnLabels = {"A", "B", "C", "D"};

  std::cout << "Machine\n";
  VendingMachine vendingMachine(rowLabels, columnLabels, 11);

  const auto &slots_a1 = vendingMachine.getVendingSlot("A1");
  std::cout << "Selected slot: " << slots_a1.getLabel() << " capacity: " << slots_a1.getCapacity() << "\n";

  const auto &slots = vendingMachine.getVendingSlots();
  for (const auto &[slotLabel, vendingSlot] : slots)
  {
    std::cout << "Slot: " << vendingSlot.getLabel() << " capacity: " << vendingSlot.getCapacity() << "\n";
  }

  std::cout << "\nMachine 2\n";
  VendingMachine vendingMachine2({1, 2, 3, 4}, {"A", "B", "C", "D"}, 3);

  const auto &slots2_b2 = vendingMachine2.getVendingSlot("B2");
  std::cout << "Selected slot: " << slots2_b2.getLabel() << " capacity: " << slots2_b2.getCapacity() << "\n";

  const auto &slots2 = vendingMachine2.getVendingSlots();
  for (const auto &[slotLabel, vendingSlot] : slots2)
  {
    std::cout << "Slot: " << vendingSlot.getLabel() << " capacity: " << vendingSlot.getCapacity() << "\n";
  }

  std::cin.get();

  return 0;
}

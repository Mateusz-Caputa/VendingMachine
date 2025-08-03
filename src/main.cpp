// File - src\main.cpp

#include <iostream>

#include "VendingMachine.hpp"
#include "Product.hpp"

std::string centerText(const std::string &text, int width, char filler = ' ')
{
  int padding = width - static_cast<int>(text.size());
  if (padding <= 0)
    return text;

  int padLeft = padding / 2;
  int padRight = padding - padLeft;

  return std::string(padLeft, filler) + text + std::string(padRight, filler);
}

int main()
{
  std::vector<int> rowLabels = {1, 2, 3, 4};
  std::vector<std::string> columnLabels = {"A", "B", "C", "D"};
  int columnLength = static_cast<int>(columnLabels.size());
  int slotSize = 12;

  VendingMachine vendingMachine("Mat`s Vending Machine", rowLabels, columnLabels, slotSize);
  std::cout << vendingMachine.getName() << " | Slots: " << vendingMachine.getVendingSlots().size() << " | Slot capacity: " << vendingMachine.getSlotProductCapacity() << "\n";

  Product cola("Cola", 1.25);

  if (VendingSlot *slot_a1 = vendingMachine.getVendingSlot("A1"))
  {
    slot_a1->addProduct(cola);
  }
  else
  {
    std::cout << "Slot A1 not found.\n";
  }

  for (auto &rowLabel : rowLabels)
  {
    std::cout << "+" << std::string(slotSize * columnLength + 3, '-') << "+\n";
    std::string renderCellName = "|";
    std::string renderProductName = "|";
    std::string renderProductPrice = "|";

    for (auto &columnLabel : columnLabels)
    {
      std::string slotLabel = columnLabel + std::to_string(rowLabel);

      if (VendingSlot *currentSlot = vendingMachine.getVendingSlot(slotLabel))
      {
        renderCellName += centerText("[" + currentSlot->getLabel() + "]", slotSize, ' ') + "|";

        std::optional<Product> currentProduct = currentSlot->getFrontProduct();

        if (currentProduct.has_value())
        {
          renderProductName += centerText(currentProduct->getName(), slotSize, ' ') + "|";
          renderProductPrice += centerText(currentProduct->getPrice<std::string>(), slotSize, ' ') + "|";
        }
        else
        {
          renderProductName += centerText("Empty", slotSize, ' ') + "|";
          renderProductPrice += centerText("0.00", slotSize, ' ') + "|";
        }
      }
    }
    std::cout << renderCellName << "\n";
    std::cout << renderProductName << "\n";
    std::cout << renderProductPrice << "\n";
  }

  std::cout << "+" << std::string(slotSize * columnLength + 3, '-') << "+\n";

  std::cin.get();
  return 0;
}

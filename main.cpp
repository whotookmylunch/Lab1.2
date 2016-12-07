#include <iostream>
#include "PrintEdition.h"

int main() {
    PrintEdition printEdition("Name", "Type", 40);
    std::cout << printEdition << std::endl;

    PrintEdition *printEdition1 = new PrintEdition;

    printEdition1->setName("Name1");
    printEdition1->setType("Type1");
    printEdition1->setCost(450);

    std::cout << *printEdition1 << std::endl;

    return 0;
}
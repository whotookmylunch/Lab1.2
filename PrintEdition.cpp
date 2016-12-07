#include "PrintEdition.h"

PrintEdition::PrintEdition(const std::string &Name, const std::string &type, int cost) : Name(Name), type(type),
                                                                                         cost(cost) {}
PrintEdition::PrintEdition() {}

const std::string &PrintEdition::getName() const {
    return Name;
}

void PrintEdition::setName(const std::string &Name) {
    PrintEdition::Name = Name;
}

const std::string &PrintEdition::getType() const {
    return type;
}

void PrintEdition::setType(const std::string &type) {
    PrintEdition::type = type;
}

int PrintEdition::getCost() const {
    return cost;
}

void PrintEdition::setCost(int cost) {
    PrintEdition::cost = cost;
}

std::ostream &operator<<(std::ostream &os, const PrintEdition &edition) {
    os << "Name: " << edition.Name << " type: " << edition.type << " cost: " << edition.cost;
    return os;
}

PrintEdition::~PrintEdition() {

}

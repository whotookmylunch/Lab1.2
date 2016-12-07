#ifndef PRINTEDITION_PRINTEDITION_H
#define PRINTEDITION_PRINTEDITION_H

#include <iostream>

class PrintEdition {
private:
    std::string Name;
    std::string type;
    int cost;
public:
    PrintEdition(const std::string &Name, const std::string &type, int cost);
    PrintEdition();

    const std::string &getName() const;

    void setName(const std::string &Name);

    const std::string &getType() const;

    void setType(const std::string &type);

    int getCost() const;

    void setCost(int cost);

    friend std::ostream &operator<<(std::ostream &os, const PrintEdition &edition);

    virtual ~PrintEdition();

};


#endif //PRINTEDITION_PRINTEDITION_H

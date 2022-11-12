#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

class customer {
public:
    customer(std::string n, std::string no = "");

    std::string name();
    std::string number();

private:
    std::string c_name;
    std::string c_number;
    int repaired_items;
    int total_items;
    int cur_items;
    int total_cost;
};

#endif
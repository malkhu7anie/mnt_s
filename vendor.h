#ifndef VENDOR_H
#define VENDOR_H

#include <iostream>

class Vendor {
public:
    Vendor(std::string n, std::string no = "");

    std::string name();
    std::string number();

    int total_items();
    int remaining_items();
    int non_repaired_items();
    int balance();

private:
    std::string vendor_name;
    std::string vendor_number;
    int repaired_items;
    int rem_items;
    int non_rep_items;
    int cur_balance;
};

#endif
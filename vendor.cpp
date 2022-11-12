#ifndef VENDOR_H
#define VENDOR_H

#include "vendor.h"

Vendor::Vendor(std::string a, std::string no = "") 
    : vendor_name{a}, vendor_number{no}
{
}

std::string Vendor::name() { return vendor_name; }
std::string Vendor::number() { return vendor_number; }

int Vendor::total_items() { return total_repaired_items; }
int Vendor::remaining_items() { return rem_items; }
int Vendor::non_repaired_items() { return non_rep_items; }
int Vendor::balance() { return cur_balance; }

#endif


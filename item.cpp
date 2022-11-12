#include "item.h"

bool is_type_valid(std::string t)
{ 
    return type_mp.find(t) != type_mp.end(); 
}

item::item(std::string n, std::string tp, std::string st)
    : item_name{n}, item_state{st}
{
    if (is_type_valid(tp))
        item_type = type_mp[tp];
}

std::string item::name() { return item_name; }
std::string item::type() { return sv_mp[item_type]; }
std::string item::state() { return item_state; }

int item::cost() { return repair_cost; }
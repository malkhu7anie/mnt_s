#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
#include <unordered_map>
#include <vector>

enum class _type {
    Charger, Inverter, Other
};

std::unordered_map<std::string, _type> type_mp {
    {"Charger", _type::Charger},
    {"Inverter", _type::Inverter},
    {"Other", _type::Other}
};

std::unordered_map<_type, std::string> sv_mp {
    {_type::Charger, "Charger"}, 
    {_type::Inverter, "Inverter"}, 
    {_type::Other, "Other"}
};

bool is_type_valid(std::string t);

class item { 
public:
    item(std::string n, std::string tp = "", std::string st = "");

    std::string name();
    std::string type();
    std::string status();

    int cost();

private:
    std::string item_name;
    std::string item_state;

    _type item_type;

    int repair_cost;

    std::vector<int> used_components;
};

#endif
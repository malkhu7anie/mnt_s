#include <experimental/reflexpr>
#include <iostream>

enum MyEnum { AAA = 1, BBB, CCC = 99 };

int main()
{
  auto name_of_MyEnum_0 = 
    std::meta::get_base_name_v<
      std::meta::get_element_m<
        std::meta::get_enumerators_m<reflexpr(MyEnum)>,
        0>
    >;

  // prints "AAA"
  std::cout << name_of_MyEnum_0 << std::endl;
}

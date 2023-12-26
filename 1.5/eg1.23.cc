#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    if (std::cin >> item1)
    {
        int count = 1;
        while (std::cin >> item2)
        {
            if (item1.isbn() == item2.isbn())
            {
                count += 1;
            }
            else
            {
                std::cout << "Item " << item1.isbn()
                          << " Was transacted " << count << " times."
                          << std::endl;
                item1 = item2;
                count = 1;
            }
        }
        std::cout << "Item " << item1.isbn()
                  << " Was transacted " << count << " times."
                  << std::endl;
    }
    return 0;
}
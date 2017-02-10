//
//  Item.hpp
//  assignment 2
//
//  Created by Vincent Lee on 10/25/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include <string>

class Item {

private:
    std::string _itemName;
    std::string _unit;
    int         _quantity;
    float       _price;
    
    
public:
    Item(std::string itemName, std::string unit, int quantity, float price);
    std::string ToString();
    std::string GetUnit();
    std::string GetName();  
    int         GetQuantity();
    float       GetPrice();
    float       GetTotalPrice();
    friend bool operator==(Item a, Item b);

};

#endif /* Item_hpp */

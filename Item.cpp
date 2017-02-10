//
//  Item.cpp
//  assignment 2
//
//  Created by Vincent Lee on 10/25/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "Item.h"
#include <sstream>


Item::Item(std::string itemName, std::string unit, int quantity, float price) {
    _itemName   = itemName;
    _unit       = unit;
    _quantity   = quantity;
    _price      = price;
}


std::string Item::GetUnit() {
    return _unit;
}

int Item::GetQuantity() {
    return _quantity;
}

float Item::GetPrice() {
    return _price;
}

float Item::GetTotalPrice() {
    return _quantity * _price;
}

std::string Item::GetName() {
    return _itemName;
}

std::string Item::ToString() {
    std::stringstream ss1;
    ss1 << _quantity;
    std::string qty = ss1.str();
    
    std::stringstream ss2;
    ss2 << _price;
    std::string price = ss2.str();
    
    std::stringstream ss3;
    ss3 << GetTotalPrice();
    std::string totalPrice = ss3.str();
    
    
    
//    std::string qty = std::to_string(_quantity);
//    std::string price = std::to_string(_price);
    
    return  "Item: "    + _itemName + '\n' +
            "Unit: "    + _unit     + '\n' +
            "Qty:  "    + qty       + '\n' +
            "Price: "   + price     + '\n' +
            "Total Price: " + totalPrice + '\n';
}

bool operator==(Item a, Item b) {
    return a.GetName() == b.GetName();
}




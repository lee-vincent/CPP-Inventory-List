//
//  List.cpp
//  assignment 2
//
//  Created by Vincent Lee on 10/25/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include "List.h"
#include <iostream>
#include <sstream>

List::List(){};

void List::AddItem(Item::Item *item){
    
    for(int i = (int)_shoppingList.size() - 1; i >= 0; i--) {
        if(*item == *_shoppingList[i]) {
            std::cout << "Item " + item->GetName() + " already in list.\nItem Not Added.\n\n" << std::endl;
            return;
        }
    }
    
    _shoppingList.push_back(item);
}

void List::RemoveItem(std::string itemName) {
    
    
    if(_shoppingList.size() < 1) {
        return;
        
    } else {
        for(int i = (int)_shoppingList.size() - 1; i >= 0; i--) {
            if(_shoppingList[i]->GetName() == itemName) {
                _shoppingList.erase(_shoppingList.begin()+i);
            }
        }
    }
}

std::string List::DisplayList(){
    std::string list = "";
    
    for(int i = 0; i < _shoppingList.size(); i++) {
        std::stringstream ss;
        ss << (i+1);
        std::string num = ss.str();
        list += ("Item " + num + '\n');
        list += (_shoppingList[i]->ToString() + '\n');
    }
    
    std::stringstream ss2;
    ss2 << (TotalPrice());
    std::string tot = ss2.str();
    
    list += "Shopping list total: " + tot + '\n';
    
    return list;

}

float List::TotalPrice() {
    float total = 0.0f;
    
    for(int i = 0; i < _shoppingList.size(); i++) {
        total += _shoppingList[i]->GetTotalPrice();
    }
    return total;
}













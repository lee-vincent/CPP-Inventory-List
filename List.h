//
//  List.hpp
//  assignment 2
//
//  Created by Vincent Lee on 10/25/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "Item.h"
#include <vector>


class List {

private:
    std::vector<Item *> _shoppingList;
    
    
    
public:
    
                List();
    void        AddItem(Item::Item*);
    void        RemoveItem(std::string itemName);
    std::string DisplayList();
    float       TotalPrice();
    
};


#endif /* List_hpp */

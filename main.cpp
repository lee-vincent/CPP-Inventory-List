//
//  main.cpp
//  assignment 2
//
//  Created by Vincent Lee on 10/25/15.
//  Copyright © 2015 10k Bulbs. All rights reserved.
//

#include <iostream>
#include "Item.h"
#include "List.h"
void GatherItems(List &);
void Options(List &);


int main(int argc, const char * argv[]) {
    std::cout << "Shopping List Program" << std::endl;
    
    List myList;
    GatherItems(myList);
    Options(myList);
    

    
    return 0;
}



void GatherItems(List &myList) {
    
    int itemNum = 1;

    while(true){
        std::string itemName;
        std::string unit;
        int         qty;
        float       price;
        
        std::cout << "Enter item's name: ";
        std::cin >> itemName;
        
        std::cout << "Enter item's units: ";
        std::cin >> unit;
        
        std::cout << "Enter item's price: ";
        std::cin >> price;
        
        std::cout << "Enter item's quantity: ";
        std::cin >> qty;
        
        Item *newItem;
        newItem = new Item(itemName, unit, qty, price);
        myList.AddItem(newItem);
        
        char ch;
        std::cout << "Add another item? Y/N: ";
        std::cin >> ch;
        
        if(std::toupper(ch) == 'N') {
            break;
        }
        
        itemNum++;
    }
}


void Options(List &myList) {
    
    int choice;

    std::cout << "Press 1 to view shopping list" << std::endl;
    std::cout << "Press 2 to remove an item from the shopping list" << std::endl;
    std::cout << "Press 3 to add items to the shopping list" << std::endl;
    std::cout << "Press 4 to Quit" << std::endl;
    std::cout << "Enter Choice: ";
    std::cin >> choice;
    
    
    if(choice == 1) {
        std::cout << "Your Shopping List\n\n" + myList.DisplayList();
    
    } else if (choice == 2) {
        std::string input;
        std::cout << "Enter name of item to remove: ";
        std::cin >> input;
        myList.RemoveItem(input);
    
    } else if (choice == 3) {
        GatherItems(myList);
        
    } else if (choice == 4) {
        std::cout << "Bye, have a great day" << std::endl;
        return;
        
    } else {
        std::cout << "Invalid. Program exiting" << std::endl;
        return;
    }
    
    Options(myList);
    
}







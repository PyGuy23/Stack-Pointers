//
//  Stack.hpp
//  Stack Pointers
//
//  Created by newuser on 1/4/16.
//  Copyright © 2016 Stack_Pointer. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Stack{
    
private:
    int top;
    int capacity;
    int *storage;
    
public:
    
  //friend std::ostream &operator<<(std::ostream &, const Stack &);
       
    int getCapacity(int capacity);
    void pushValue(int value);
    int peekValue();
    void popValue();
    bool checkIfEmpty();
    
};

#endif /* Stack_hpp */

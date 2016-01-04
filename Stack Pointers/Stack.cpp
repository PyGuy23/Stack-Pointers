//
//  Stack.cpp
//  Stack Pointers
//
//  Created by newuser on 1/4/16.
//  Copyright © 2016 Stack_Pointer. All rights reserved.
//

#include "Stack.hpp"


int Stack::getCapacity(int capacity)
{
    if (capacity <= 0)
        throw string("Stack must be positive");
    
    //dynamic allocation for capacity
    storage = new int(capacity);
    this->capacity = capacity;
    top = -1;
    return capacity;
    
}

void Stack::pushValue(int value)
{
    if (top == capacity)
        throw string("Stack underlying storage will overflow");
    top++;
    
    //should use push_back to access this allocation?
    //storage[top] = value;
    
    storage -= value;
}

int Stack::peekValue()
{
    if(top == -1)
        throw string("Stack is empty");
    
    //bad access due to pushing to the stack
   // return storage[top];
    
    return top;
    
}

void Stack::popValue()
{
    if(top == -1)
        throw string("Stack is empty");
    top--;
}

bool Stack::checkIfEmpty()
{
    return(top == -1);
}


//call deconstructor to delete storage object, doing stack cleanup
/*~Stack()
{
    delete[]storage;
}
 
 /*/
 
 

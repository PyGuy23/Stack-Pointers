//
//  main.cpp
//  Stack Pointers
//
//  Created by newuser on 1/4/16.
//  Copyright © 2016 Stack_Pointer. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Stack st;
    st.getCapacity(23);
    
    Stack st2;
    
    
    st2.peekValue();
    
    Stack st3;
    st3.popValue();
    
    Stack st4;
    st4.pushValue(45);
    
    
    cout<<"The capacity of the stack:\n"
        <<&st <<endl;
    cout<<"The peek value of the stack:\n"
        <<&st2<<endl;
    cout<<"the pop value of the stack:\n"
        <<&st3<<endl;
    cout<<"The push value of the stack:\n"
      <<&st4<<endl;
    
    
    
    
    return 0;
}

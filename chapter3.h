//
//  chapter3.h
//  CTCI
//
//  Created by Steve Chalco on 9/13/18.
//  Copyright © 2018 Steve Chalco. All rights reserved.
//

#ifndef chapter3_h
#define chapter3_h

//#define MAX_ITEMS = 10
class Stack{
public:
    static const unsigned MAX_ITEMS=10;
    Stack ();
    unsigned size() const;
    void push (int item);
    int pop();
    int minPop();
protected:
    int data[MAX_ITEMS];
    int min[MAX_ITEMS];
    unsigned els;
    unsigned elsMin;
};

#endif /* chapter3_h */

//
//  CTCI_1-1.cpp
//  CTCI
//
//  Created by Steve Chalco on 9/10/18.
//  Copyright © 2018 Steve Chalco. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "chapter1.h"

const unsigned short ASCIISIZE=256;

#include <stdio.h>
#include <string>
using namespace std;

bool isUnique(string myString, bool *ASCIIset, unsigned int n){
    if(n==0) ASCIIset= new bool[ASCIISIZE];
    if(ASCIIset[myString[n]]){
        delete [] ASCIIset;
        return false;
    }
    if(n==myString.size()){
        delete [] ASCIIset;
        return true;
    }
    ASCIIset[myString[n]]=true;
    return isUnique(myString,ASCIIset,n+1);
}

//Time Complexity O(n)
//Space Complexity O(1)

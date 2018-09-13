//
//  CTCI_2-1.cpp
//  CTCI
//
//  Created by Steve Chalco on 9/12/18.
//  Copyright © 2018 Steve Chalco. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "chapter2.h"
#include <list>
#include <iterator>
#include <map>

using namespace std;

void deleteDups(list <int> &myList){
    map<int, bool> hash;
    for(list <int>::iterator it=myList.begin();it!=myList.end();++it){
        if(hash.find((*it))!=hash.end())
            it=myList.erase(it);
        else
            hash.insert(pair <int, bool>(*it,true));
    }
}

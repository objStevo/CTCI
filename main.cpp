//
//  main.cpp
//  CTCI
//
//  Created by Steve Chalco on 9/10/18.
//  Copyright © 2018 Steve Chalco. All rights reserved.
//

#include <iostream>
#include "chapter1.h"
#include "chapter2.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    //string steve = "hello";
    //cout<<isUnique(steve);
    list <int> testCase;
    testCase.push_back(1);
    testCase.push_back(2);
    testCase.push_back(3);
    testCase.push_back(2);
    testCase.push_back(10);
    //cout<<"Before deleteDups"<<endl;
    //for(list<int>::iterator it=testCase.begin();it!=testCase.end();++it)
    //    cout<<*it<<endl;
    deleteDups(testCase);
    //testCase.erase(testCase.begin());
    //cout<<"After deleteDups"<<endl;
    for(list<int>::iterator it=testCase.begin();it!=testCase.end();++it)
        cout<<*it<<endl;
    
    return 0;
}

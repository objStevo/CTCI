/*
 Cracking the Coding Interview
 
 Question 3.2
 How would you design a stack which, in addition to push and pop, has a function min which returns the
 minimum element? Push, pop, and min should all operate in O(1) time.
 
 My Solution:
 I implemented a stack with with two arrays: one to be the primary stack, and the second to keep track of the
 minimum elements (ie a minimum stack).
 
 Time Comlexity:
 pop()..........O(1)
 push().........O(1)
 minPop().......O(1)
 
 Space Comlexity:
 pop()..........O(1)
 push().........O(1)
 minPop().......O(1)
 */

#include <stdio.h>
#include <iostream>
#include "chapter3.h"
using namespace std;

bool die (const string &msg){
    cout<<"Fatal error: "<<msg<<endl;
    exit(EXIT_FAILURE);
}

Stack::Stack(){
    els=0;
    elsMin=0;
}
unsigned Stack::size()const{
    return els;
}
void Stack::push(int item){
    if(els==MAX_ITEMS) die("Stack:: push: overflow");
    if(els==0)
        min[elsMin++]=item;
    if(item<min[elsMin-1])
        min[elsMin++]=item;
    data[els++]=item;
}
int Stack::pop(){
    if(els==0) die("Stack:: pop: underflow");
    if(data[els-1]==min[elsMin-1])
        elsMin--;
    return data[--els];
}
int Stack:: minPop(){
    if(els==0) die("Stack:: pop: underflow");
    return min[elsMin-1];
}



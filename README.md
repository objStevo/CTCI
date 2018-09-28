Solutions to Cracking the Coding Interview in C++

Chapter 1

chapter1.h 
Header file with declarations for chapter 1 solutions. 

CTCI_1-1.cpp
Question 1.1
Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?

My Solution:
With the use of an an array of boolean variables, the function can track duplicates an guarentee O(n) complexity. 
Without the use of additional data structure, we would have to compare each string character with every other
character; therefore, ensuring O(n^2) time complexity.

Time Comlexity:
isUnique().........O(n)

Space Comlexity:
isUnique().........O(1)

Chapter 2

chapter2.h 
Header file with declarations for chapter 2 solutions. 

CTCI_2-1.cpp
Question 2.1
Remove Dups: Write code to remove duplicates from an unsorted linked list.
 
My Solution:
The implementation iterates through the linked list, pushing node values onto a hash table.
If a collision occurs, then a duplicate node is present at that index. The duplicate node is then
erased with the use of the list::erase() from the c++ STL.
 
Time Comlexity:
deleteDups().........O(n)
 
Space Comlexity:
deleteDups().........O(n)

Chapter 3

chapter3.h 
Header file with declarations for chapter 3 solutions.

CTCI_3-2.cpp
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






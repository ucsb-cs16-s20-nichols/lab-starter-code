#ifndef LINKEDLISTFUNCS_H 
#define  LINKEDLISTFUNCS_H
#include "linkedList.h"
#include <algorithm>
#include <climits>
#include <string>
#include <string>
using std::string;

std::string intToString(int i);
std::string arrayToString(int a[], int size);


// the new list is new storage allocated on the heap
// it is the responsibility of the caller to eventually free that storage

LinkedList * arrayToLinkedList(int array[], int size); 

// free up every node on this linked list

void freeLinkedList(LinkedList * list);

string linkedListToString(LinkedList * list);

#endif //  LINKEDLISTFUNCS_H

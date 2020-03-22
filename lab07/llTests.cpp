#include "linkedListFuncs.h"
#include "moreLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    std::cerr << "Usage: " << argv[0] << " [num of test to run]" << std::endl;
    return 1;
  }else {
    int testNum = atoi(argv[1]);
    if (testNum == 1) {

      START_TEST_GROUP("ADD_INT_TO_END_OF_LIST");

      int threeNums[3]={42,57,61};
      LinkedList *list = arrayToLinkedList(threeNums,3);
      LinkedList *empty = new LinkedList();
      empty->head = NULL;
      empty->tail = NULL;

      ASSERT_EQUALS( "[42]->[57]->[61]->null", linkedListToString(list));
      addIntToEndOfList(list, 12);
      ASSERT_EQUALS( "[42]->[57]->[61]->[12]->null", linkedListToString(list));
      addIntToEndOfList(list, -17);
      ASSERT_EQUALS( "[42]->[57]->[61]->[12]->[-17]->null", linkedListToString(list));
      freeLinkedList(list);
      
      ASSERT_EQUALS( "null", linkedListToString(empty));
      addIntToEndOfList(empty, 0);
      ASSERT_EQUALS( "[0]->null", linkedListToString(empty));
      addIntToEndOfList(empty, 19);
      ASSERT_EQUALS( "[0]->[19]->null", linkedListToString(empty));
      freeLinkedList(empty);

    } else if (testNum == 2) {

      START_TEST_GROUP("ADD_INT_TO_START_OF_LIST");

      int threeNums[3]={42,57,61};
      LinkedList *list = arrayToLinkedList(threeNums,3);
      LinkedList *empty = new LinkedList();
      empty->head = NULL;
      empty->tail = NULL;

      ASSERT_EQUALS( "[42]->[57]->[61]->null", linkedListToString(list));
      addIntToStartOfList(list, 12);
      ASSERT_EQUALS( "[12]->[42]->[57]->[61]->null", linkedListToString(list));
      addIntToStartOfList(list, -17);
      ASSERT_EQUALS( "[-17]->[12]->[42]->[57]->[61]->null", linkedListToString(list));
      freeLinkedList(list);
      
      ASSERT_EQUALS( "null", linkedListToString(empty));
      addIntToStartOfList(empty, 0);
      ASSERT_EQUALS( "[0]->null", linkedListToString(empty));
      addIntToStartOfList(empty, 19);
      ASSERT_EQUALS( "[19]->[0]->null", linkedListToString(empty));
      freeLinkedList(empty);

    } else if (testNum == 3) {

      START_TEST_GROUP("POINTER_TO_MAX");

      int highestFirst[3]={73,57,61};
      LinkedList *list1 = arrayToLinkedList(highestFirst,3);
      int highestSecond[3] = {-7, -4, -11};
      LinkedList* list2 = arrayToLinkedList(highestSecond,3);
      int highestLast[4] = {1,2,3,4};
      LinkedList* list3 = arrayToLinkedList(highestLast,4);
      int tied[3] = {1,3,3};
      LinkedList* list4 = arrayToLinkedList(tied,3);

      ASSERT_NOT_NULL(pointerToMax(list1));
      if(pointerToMax(list1) != 0) { //pointer not NULL
	ASSERT_EQUALS(list1->head, pointerToMax(list1));
	ASSERT_EQUALS(73, pointerToMax(list1)->data);
	ASSERT_EQUALS(57, pointerToMax(list1)->next->data);
      }

      ASSERT_NOT_NULL(pointerToMax(list2));
      if(pointerToMax(list2) != 0) { //pointer not NULL
	ASSERT_EQUALS(list2->head->next, pointerToMax(list2));
	ASSERT_EQUALS(-4, pointerToMax(list2)->data);
      }

      ASSERT_NOT_NULL(pointerToMax(list3));
      if(pointerToMax(list3) != 0) { //pointer not NULL
	ASSERT_EQUALS(list3->tail, pointerToMax(list3));
	ASSERT_EQUALS(4, pointerToMax(list3)->data);
      }

      ASSERT_NOT_NULL(pointerToMax(list4));
      if(pointerToMax(list4) != 0) { //pointer not NULL
	ASSERT_EQUALS(list4->head->next, pointerToMax(list4));
	ASSERT_EQUALS(3, pointerToMax(list4)->data);
	ASSERT_EQUALS(3, pointerToMax(list4)->next->data);
      }

      freeLinkedList(list1);
      freeLinkedList(list2);
      freeLinkedList(list3);
      freeLinkedList(list4);

    } else if (testNum == 4) {

      START_TEST_GROUP("POINTER_TO_MIN");

      int lowestFirst[3]={13,57,61};
      LinkedList *list1 = arrayToLinkedList(lowestFirst,3);
      int lowestSecond[3] = {-7, -57, -11};
      LinkedList* list2 = arrayToLinkedList(lowestSecond,3);
      int lowestLast[4] = {1,2,3,0};
      LinkedList* list3 = arrayToLinkedList(lowestLast,4);
      int tied[3] = {5,3,3};
      LinkedList* list4 = arrayToLinkedList(tied,3);

      ASSERT_NOT_NULL(pointerToMin(list1));
      if(pointerToMin(list1) != 0) { //pointer not NULL
	ASSERT_EQUALS(list1->head, pointerToMin(list1));
	ASSERT_EQUALS(13, pointerToMin(list1)->data);
	ASSERT_EQUALS(57, pointerToMin(list1)->next->data);
      }

      ASSERT_NOT_NULL(pointerToMin(list2));
      if(pointerToMin(list2) != 0) { //pointer not NULL
	ASSERT_EQUALS(list2->head->next, pointerToMin(list2));
	ASSERT_EQUALS(-57, pointerToMin(list2)->data);
      }

      ASSERT_NOT_NULL(pointerToMin(list3));
      if(pointerToMin(list3) != 0) { //pointer not NULL
	ASSERT_EQUALS(list3->tail, pointerToMin(list3));
	ASSERT_EQUALS(0, pointerToMin(list3)->data);
      }

      ASSERT_NOT_NULL(pointerToMin(list4));
      if(pointerToMin(list4) != 0) { //pointer not NULL
	ASSERT_EQUALS(list4->head->next, pointerToMin(list4));
	ASSERT_EQUALS(3, pointerToMin(list4)->data);
	ASSERT_EQUALS(3, pointerToMin(list4)->next->data);
      }

      freeLinkedList(list1);
      freeLinkedList(list2);
      freeLinkedList(list3);
      freeLinkedList(list4);

    } else if (testNum == 5) {

      START_TEST_GROUP("LARGEST_VALUE");

      int highestFirst[3]={73,57,61};
      LinkedList *list1 = arrayToLinkedList(highestFirst,3);
      int highestSecond[3] = {-7, -4, -11};
      LinkedList* list2 = arrayToLinkedList(highestSecond,3);
      int highestLast[4] = {1,2,3,4};
      LinkedList* list3 = arrayToLinkedList(highestLast,4);
      int tied[3] = {1,3,3};
      LinkedList* list4 = arrayToLinkedList(tied,3);

      ASSERT_EQUALS(73, largestValue(list1));
      ASSERT_EQUALS(-4, largestValue(list2));
      ASSERT_EQUALS(4, largestValue(list3));
      ASSERT_EQUALS(3, largestValue(list4));

    } else if (testNum == 6) {

      START_TEST_GROUP("SMALLEST_VALUE");

      int lowestFirst[3]={13,57,61};
      LinkedList *list1 = arrayToLinkedList(lowestFirst,3);
      int lowestSecond[3] = {-7, -57, -11};
      LinkedList* list2 = arrayToLinkedList(lowestSecond,3);
      int lowestLast[4] = {1,2,3,0};
      LinkedList* list3 = arrayToLinkedList(lowestLast,4);
      int tied[3] = {5,3,3};
      LinkedList* list4 = arrayToLinkedList(tied,3);

      ASSERT_EQUALS(13, smallestValue(list1));
      ASSERT_EQUALS(-57, smallestValue(list2));
      ASSERT_EQUALS(0, smallestValue(list3));
      ASSERT_EQUALS(3, smallestValue(list4));

    } else if (testNum == 7) {

      START_TEST_GROUP("SUM");
      
      int l1[3]={9,3,61};
      LinkedList *list1 = arrayToLinkedList(l1,3);
      int l2[3] = {-7, -10, -11};
      LinkedList* list2 = arrayToLinkedList(l2,3);
      int l3[4] = {1,2,3,0};
      LinkedList* list3 = arrayToLinkedList(l3,4);
      int l4[3] = {5,-5,3};
      LinkedList* list4 = arrayToLinkedList(l4,3);

      ASSERT_EQUALS(73, sum(list1));
      ASSERT_EQUALS(-28, sum(list2));
      ASSERT_EQUALS(6, sum(list3));
      ASSERT_EQUALS(3, sum(list4));
    }
  }
  
  return 0;
}


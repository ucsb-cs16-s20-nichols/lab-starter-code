#include "arrayFuncs.h"
#include "moreArrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  int zeros[3]={0,0,0}; // initializes all elements to 0  
  int empty[] = {};
  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  int meaning[] = {42};
  int mix1[10]={-42,12,-9,56,123,32767,48}; // last three will be zero
  int mix2[10]={-42,12,-9,56,123,32767,48,12,-43,-43};
  int descending[] = {5,4,3,2,1};

  //CHECK INITIAL VALUES
  START_TEST_GROUP( "INITIALIZING");
  ASSERT_EQUALS( "{3,3,3,3,3}", arrayToString(fiveThrees,5));
  ASSERT_EQUALS( "{0,0,0}", arrayToString(zeros,3));
  ASSERT_EQUALS( "{}", arrayToString(empty,0));
  ASSERT_EQUALS( "{2,3,5,7,11}", arrayToString(primes,5));
  ASSERT_EQUALS( "{2,3,5,7,11,13,17,19,23,29}", arrayToString(primes,10));
  ASSERT_EQUALS( "{42}", arrayToString(meaning,1));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,0,0,0}",arrayToString(mix1,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));

  //indexOfMax
  START_TEST_GROUP("INDEX_OF_MAX");
  ASSERT_EQUALS(0, indexOfMax(fiveThrees,5));
  ASSERT_EQUALS(0, indexOfMax(zeros,3));
  ASSERT_EQUALS(0, indexOfMax(primes,1));
  ASSERT_EQUALS(4, indexOfMax(primes,5));
  ASSERT_EQUALS(9, indexOfMax(primes,10));
  ASSERT_EQUALS(0, indexOfMax(meaning,1));
  ASSERT_EQUALS(5, indexOfMax(mix1,10));
  ASSERT_EQUALS(5, indexOfMax(mix2,10));
  ASSERT_EQUALS(1, indexOfMax(mix1,3));
  ASSERT_EQUALS(1, indexOfMax(mix2,3));
  ASSERT_EQUALS(0, indexOfMax(mix2,1));
  ASSERT_EQUALS(4, indexOfMax(mix2,5));

  //indexOfMin
  START_TEST_GROUP("INDEX_OF_MIN");
  ASSERT_EQUALS(0, indexOfMin(fiveThrees,5));
  ASSERT_EQUALS(0, indexOfMin(zeros,3));
  ASSERT_EQUALS(0, indexOfMin(primes,5));
  ASSERT_EQUALS(0, indexOfMin(primes,10));
  ASSERT_EQUALS(0, indexOfMin(meaning,1));
  ASSERT_EQUALS(0, indexOfMin(mix1,10));
  ASSERT_EQUALS(8, indexOfMin(mix2,10));
  ASSERT_EQUALS(0, indexOfMin(mix1,3));
  ASSERT_EQUALS(0, indexOfMin(mix2,3));
  ASSERT_EQUALS(4, indexOfMin(descending,5));
  ASSERT_EQUALS(0, indexOfMin(descending,1));

  //largestValue
  START_TEST_GROUP("LARGEST_VALUE");
  ASSERT_EQUALS(3, largestValue(fiveThrees,5));
  ASSERT_EQUALS(0, largestValue(zeros,3));
  ASSERT_EQUALS(11, largestValue(primes,5));
  ASSERT_EQUALS(29, largestValue(primes,10));
  ASSERT_EQUALS(42, largestValue(meaning,1));
  ASSERT_EQUALS(32767, largestValue(mix1,10));
  ASSERT_EQUALS(32767, largestValue(mix2,10));
  ASSERT_EQUALS(12, largestValue(mix1,3));
  ASSERT_EQUALS(12, largestValue(mix2,3));
  ASSERT_EQUALS(5, largestValue(descending,5));
  ASSERT_EQUALS(5, largestValue(descending,1));

  //smallestValue
  START_TEST_GROUP("SMALLEST_VALUE");
  ASSERT_EQUALS(3, smallestValue(fiveThrees,5));
  ASSERT_EQUALS(0, smallestValue(zeros,3));
  ASSERT_EQUALS(2, smallestValue(primes,5));
  ASSERT_EQUALS(2, smallestValue(primes,10));
  ASSERT_EQUALS(42, smallestValue(meaning,1));
  ASSERT_EQUALS(-42, smallestValue(mix1,10));
  ASSERT_EQUALS(-43, smallestValue(mix2,10));
  ASSERT_EQUALS(-42, smallestValue(mix1,3));
  ASSERT_EQUALS(-42, smallestValue(mix2,3));
  ASSERT_EQUALS(1, smallestValue(descending,5));
  ASSERT_EQUALS(5, smallestValue(descending,1));

  //sum
  START_TEST_GROUP("SUM");
  ASSERT_EQUALS(15, sum(fiveThrees,5));
  ASSERT_EQUALS(0, sum(zeros,3));
  ASSERT_EQUALS(28, sum(primes,5));
  ASSERT_EQUALS(129, sum(primes,10));
  ASSERT_EQUALS(42, sum(meaning,1));
  ASSERT_EQUALS(32955, sum(mix1,10));
  ASSERT_EQUALS(32881, sum(mix2,10));
  ASSERT_EQUALS(-39, sum(mix1,3));
  ASSERT_EQUALS(-39, sum(mix2,3));
  ASSERT_EQUALS(15, sum(descending,5));
  ASSERT_EQUALS(5, sum(descending,1));


  //copyElements
  START_TEST_GROUP("COPY_ELEMENTS");
  copyElements(mix1,primes,7);

  ASSERT_EQUALS( "{2,3,5,7,11,13,17,19,23,29}", arrayToString(primes,10));
  ASSERT_EQUALS( "{2,3,5,7,11,13,17,0,0,0}",arrayToString(mix1,10));

  copyElements(mix1,mix2,3);

  ASSERT_EQUALS( "{-42,12,-9,7,11,13,17,0,0,0}",arrayToString(mix1,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));

  copyElements(mix1,mix2,10);

  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix1,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));

  //copyOddOnly
  START_TEST_GROUP("COPY_ODD_ONLY");
  int a[10] = {0};

  ASSERT_EQUALS(3,copyOddOnly(a,descending,5));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));
  ASSERT_EQUALS( "{5,3,1}",arrayToString(a,3));

  ASSERT_EQUALS(5,copyOddOnly(a,mix2,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));
  ASSERT_EQUALS( "{-9,123,32767,-43,-43}",arrayToString(a,5));

  //multiplyPairwise
  START_TEST_GROUP("MULTIPLY_PAIRWISE");
  multiplyPairwise(fiveThrees,descending,a,5);

  ASSERT_EQUALS( "{3,3,3,3,3}", arrayToString(fiveThrees,5));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));
  ASSERT_EQUALS( "{15,12,9,6,3}", arrayToString(a,5));

  multiplyPairwise(primes,descending,a,4);

  ASSERT_EQUALS( "{2,3,5,7,11}", arrayToString(primes,5));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));
  ASSERT_EQUALS( "{10,12,15,14}",arrayToString(a,4));

  multiplyPairwise(primes,primes,a,7);

  ASSERT_EQUALS( "{2,3,5,7,11,13,17}", arrayToString(primes,7));
  ASSERT_EQUALS( "{4,9,25,49,121,169,289}",arrayToString(a,7));

  //createArray
  START_TEST_GROUP("CREATE_ARRAY");
  int* oneElem = createArray(1);
  int* threeElems = createArray(3);
  int* fiveElems = createArray(5);
  ASSERT_EQUALS( "{0}", arrayToString(oneElem, 1));
  ASSERT_EQUALS( "{0,0,0}", arrayToString(threeElems, 3));
  ASSERT_EQUALS( "{0,0,0,0,0}", arrayToString(fiveElems, 5));

  if(oneElem != 0){
    oneElem[0] = 5;
  }
  if(threeElems != 0){
    threeElems[0] = -10;
    threeElems[2] = 9999;
  }
  if(fiveElems != 0){
    fiveElems[0] = 1;
    fiveElems[1] = 56;
    fiveElems[2] = 78;
    fiveElems[3] = -983;
    fiveElems[4] = -23;
  }
  ASSERT_EQUALS( "{5}", arrayToString(oneElem, 1));
  ASSERT_EQUALS( "{-10,0,9999}", arrayToString(threeElems, 3));
  ASSERT_EQUALS( "{1,56,78,-983,-23}", arrayToString(fiveElems, 5));
  return 0;
}

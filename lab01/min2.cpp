/*
Code originally by P. Conrad, 2016
Code modified   by Z. Matni, Oct. 2016
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int smallest_of_two(int num1, int num2); // returns smaller number 

int main(int argc, char *argv[])  {
  if (argc != 3) {
    cerr << "Usage: " << argv[0] << " num1 num2" << endl;
    cerr << " Prints smaller of the two numbers" << endl;
    exit(1);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  cout << smallest_of_two(a,b) << endl;
  
  return 0;
}

int smallest_of_two(int num1, int num2) {
  if (num1<num2) {
    return num1;
  } else {
    return num2;
  }
}



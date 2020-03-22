/*
Code originally by P. Conrad, 2016
Code modified   by Z. Matni, Oct. 2016
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int smallest_of_two(int num1, int num2); // returns smaller number 
int smallest_of_three(int num1, int num2, int num3); // returns smaller number 

int main(int argc, char *argv[])  {
  if (argc != 4) {
    cerr << "Usage: " << argv[0] << " num1 num2 num3" << endl;
    cerr << " Prints smallest of the three numbers" << endl;
    exit(1);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  cout << smallest_of_three(a,b,c) << endl;
  
  return 0;
}

int smallest_of_two(int num1, int num2) {
  if (num1 < num2) 
    return num1;
  return num2;
}

int smallest_of_three(int num1, int num2, int num3) {
  return smallest_of_two(num1,smallest_of_two(num2, num3));
}



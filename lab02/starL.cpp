// starL.cpp   A demonstration of ASCII Art printing L characters
// Compile using the command: g++ --std=c++11 starL.cpp -o starL

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starL(int width, int height);
void runTests(void);

// starL is A C++ function that returns a string that, when printed on cout,
// renders the letter L with stars as ASCII art, 
// at any width or height, provided both width and height are >= 2
// If either is less than 2, the function should return an empty string.

// When both width and height are >=2, the length of the result string
// should be (width + 1) * height (where the +1 is for the \n).    

// For examples, see the test cases in runTests().

// Note that the trailing spaces on each line are REQUIRED
// for the function to be considered correct.

string starL(int width, int height)
{

  string result="";
  // check if parameters are valid
  if ((width<2) || (height < 2))
    return result;  // return without printing anything
  
  // add the first height-1 rows that are a single star
  // followed by width-1 spaces, then a \n
  for (int row=1; row<=height-1; row++) {
    result += "*";
    for (int col=2; col<=width; col++) {
      result += " ";
    }
    result += "\n";
  }

  // add the final row of width stars  
  for (int col=1; col<=width; col++) {
    result += "*";
  }
  result += "\n";  
  return result;   
}

// Test-Driven Development; check expected results against actual

void runTests(void) {

  // The following line works because in C and C++ when string literals
  // are separated only by whitespace (space, tab, newline), they 
  // automatically get concatenated into a single string literal

  string starL34Expected = 
    "*  \n"
    "*  \n"
    "*  \n"
    "***\n" ;
  
  assertEquals(starL34Expected,starL(3,4),"starL(3,4)");

  string starL43Expected = 
    "*   \n"
    "*   \n"
    "****\n" ;
  
  assertEquals(starL43Expected,starL(4,3),"star(4,3)");
  
  assertEquals("",starL(1,2),"starL(1,2)");
  assertEquals("",starL(2,1),"starL(2,1)");
}

// Test harness

void assertEquals(string expected, string actual, string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}


// Main function

int main(int argc, char *argv[])
{
  
  if (argc!=3) {
    cerr << "Usage: " << argv[0] << " width height" << endl;
    exit(1);
  }
  
  int width = stoi(argv[1]);
  int height = stoi(argv[2]);
  // If the program is executed with parameters -1 -1 unit test
  // the starL() function using our automated test framework
  if (width==-1 && height==-1) {
    runTests();
    exit(0);
  }

  cout << starL(width,height);
  return 0;

}


// backslash.cpp     ASCII art backslash as a C++ string
// A C++ function that returns a string that, when printed on cout,
// renders a backslash out of stars with a given width (width and height
// must be equal).   
// If width less than 2, the function should return an empty string.


#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// function prototypes
string stringOfNChars(int n, char c);
string stringOfKSpacesNStars(int k, int n);
string backslash(int width);

int main(int argc, char *argv[])
{
  int i;
  int width;

  // check the number of arguments

  if (argc!=2) {
      cerr << "Usage: " << argv[0] << " width" << endl;
      exit(1);
  }

  // convert command line parameter and call function

  width=atoi(argv[1]);
  cout << backslash(width) << flush; //function call to draw the backslash
 
  // no endl afterwards since backslash already puts one at the end
  // of the last line.  We use "flush" instead, though we probably,
  // on most systems, don't need to.

  return 0;
}

string backslash(int width)
{

  int i;
  int height = width; // width is equal to height

  string result="";

  // so this for loop iterates over the rows
  for (i=0;i<height;i++) {
      // i spaces then a single star and a newline
      result += stringOfKSpacesNStars(i,1) + "\n";
  }

  return result; // leave this out, and bad things happen
}


string stringOfNChars(int n, char c)
{
  int i;
  string result="";
  // print a line of *
  for (i=0; i<n; i++)
    result += c;
  return result;
}

string stringOfKSpacesNStars(int k, int n)
{
  return stringOfNChars(k,' ') + stringOfNChars(n,'*');
}


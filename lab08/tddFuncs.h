#ifndef TDDFUNCS_H
#define TDDFUNCS_H
#include "linkedList.h"

#include <string>

void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message="");

void assertEquals(int expected, 
		  int actual, 
		  std::string message="");

void assertEquals(Node* expected, 
		  Node* actual, 
		  std::string message);

#define ASSERT_EQUALS(expected,actual) assertEquals(expected,actual,#actual)


void assertTrue(bool expression, std::string message="");

#define ASSERT_TRUE(expression) assertTrue(expression,#expression)

void assertNotNull(Node* actual, std::string message);

#define ASSERT_NOT_NULL(actual) assertNotNull(actual,#actual)

void startTestGroup(std::string name);

#define START_TEST_GROUP(name) startTestGroup(name)

#endif // TDDFUNCS_H

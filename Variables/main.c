#include <stdbool.h> // <---  we need to import bools to use them
#include <stdio.h>

int main() {

  // integers

  int age = 20;
  int year = 2026;

  // For representing an integer on a print we use %d
  printf("You are %d years old\n", age);
  printf("The year is %d\n", year);

  // floats

  float off = 35.2;

  // For floats we use %f
  printf("The angle is off by %f degrees\n", off);

  // doubles

  double pi = 3.1415926535;
  // for doubles we have to put how many numbers after the ',' we are gonna show
  printf("the value of pi is %.7lf\n", pi);

  // characters

  char grade = 'F';

  // For Characters we use %c
  printf("Your grade is %c\n", grade);

  // Strings (and arrays)
  // C Does not come with Strings, so what we use instead its an Array of
  // Characters

  char name[] = "Cho";

  // we use %s for Strings
  printf("My name is %s", name);

  // bools
  // NEED TO IMPORT THEM AT THE START OF THE FILE
  bool reported = true;

  // Boleans can be represented as decimals, even if we do not normally do it
  printf("%d", reported);

  if (reported) {
    printf("You already reported this user");
  } else {
    printf("User reported");
  };

  // int = 4 bytes normally
  // float = 4 bytes
  // double = 8 bytes
  // char = 1 byte
  // char[] = variable size
  // bool = 1 byte, requires <stdbool.h>

  return 0;
}

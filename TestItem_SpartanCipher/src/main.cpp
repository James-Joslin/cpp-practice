#include <string>
#include <vector>
#include <iostream>
#include "ExternalFunctions.h"

using namespace std;

int main()
{
   string inputString;
   int nSlides;
   
   cout << "Enter string: ";
   getline(cin, inputString);
   
   cout << "Enter number of slides: ";
   cin >> nSlides;

   spartanCipher(inputString, nSlides);

   return 0;
}

// #include <stdio.h>      /* printf */
// #include <math.h>       /* ceil */

// int main ()
// {
// 	float length = 21.0;
// 	float x = ceil(length/6);

// 	printf ( "the ceil of 21/6 is %.1f\n", x );
// 	return 0;
// }
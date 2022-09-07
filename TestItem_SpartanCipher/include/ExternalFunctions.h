#include <string>
#include <vector>
#include <math.h>
#include <cstring>
#include <iostream>

using namespace std;

void spartanCipher(string inputString, int nSlides)
{
    float length = inputString.length();
    // ceil rounds a float up, type has to be float though not int
    float x = ceil(length/nSlides);

    // construct char array from string - trying to avoid vectors
    // static cast is a method of converting float to int
    char char_array[static_cast<int>(length) + 1];
    strcpy(char_array, inputString.c_str());
    
    char sliced_string[nSlides][static_cast<int>(x)];

    int counter = 0;
    while (counter < static_cast<int>(length))
    {
        for(int i = 0; i < nSlides; i++){
            for(int j = 0; j < static_cast<int>(x); j++){
                sliced_string[i][j] = sliced_string[counter];
                counter += 1;
        }
        
    }
    
    for(int i = 0; i < nSlides; i++){
        cout << endl;
        for(int j = 0; j < static_cast<int>(x); j++){
            cout << sliced_string[i][j];
        }
}

/**
 *      1) For each char in string:
 *          -Find ASCII value of char
 *              +(int)*key
 *          -Multiply ascii by char's position in string
 *          -Add it to a counter
 *      2) Modulo counter by 269
 *      3) return output of step 2
 * 
 * 
 *      Variables
 *          -transformedAscii -> The product of char's ascii value times char's index 
 *          -sum -> sum of all transformedAscii's
 *      
 * */




#include<stdio.h>

int hashFunct(char *key) {
    int sum = 0;
    int i = 0;
    while (key[i] != NULL) {
        int transformedAscii = ((int)key[i]) * i;
        sum = sum + transformedAscii;
        i++;
    }
    return sum % 269;
}

int main() {
   char  string[] = "Salvatore Palomino";
   printf("%i", hashFunct(string));
}

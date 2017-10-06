#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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


void insert(char hshTbl[][25], char key[25], char value[25]) {
    int hash = hashFunct(key);
    strcpy(hshTbl[hash], value);  
}


 char * find(char hshTbl[][25], char key[25]) {
    int hash = hashFunct(key);
    return hshTbl[hash];
}


void del(char hshTbl[][25], char key[25]) {
    int hash = hashFunct(key);
    strcpy(hshTbl[hash], ""); 
}


int main() {
    char hshTbl[1000][25];
    char key[] = "key";
    char value[] = "value";
    
    insert(hshTbl, key, value);
    char *val = find(hshTbl, key);
    printf("%s\n", val);
    
    del(hshTbl, key);
    val = find(hshTbl, key);
    printf("%s", val);
}

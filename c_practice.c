/*백준 1427*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void) {

    int n;
    scanf("%d", &n);
    char number[10];
    for(int i = 0; i < 10; i++){
        int k = 10 ^ i;
        if (n / k > 0){ 
        number[i] = n / k;
        }
    }
    
    for(int i = 0; i < strlen(number); i++){
        for(int j = 0; j < strlen(number); j++) {
            if(number[i] < number[j]) {
                int k;
                k = number[i];
                number[i] = number[j];
                number[j] = k;
            }
        }
    }
    for(int i = 0; i < strlen(number); i++){
        if(number[i] > 0){
            printf("%d", number[i]);
        }
    }


    return 0;
}
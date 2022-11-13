#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char *)malloc(sizeof(char) * (4 - num % 2));
    if(0 == num % 2) answer = "Even";
    else answer = "Odd";    
    return answer;
}
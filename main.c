//
//  main.c
//  CaseConverter
//
//  Created by Vibhaw on 12/05/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char input, output;

    printf("Enter a letter to case convert it: ");

    input = getchar();

    if (input >= 65 && input <= 90) {
        output = input + 32;
    }else if (input >= 97 && input <= 122){
        output = input - 32;
    }

    putchar(output);
    printf("\n");

    return 0;
}

#include <stdio.h>

int hex_to_dec(char hexDigit){
    switch (hexDigit) {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case 'A':
        case 'a':
            return 10;
        case 'B':
        case 'b':
            return 11;
        case 'C':
        case 'c':
            return 12;
        case 'D':
        case 'd':
            return 13;
        case 'E':
        case 'e':
            return 14;
        case 'F':
        case 'f':
            return 15;
        default:
            printf("Invalid hexadecimal digit\n\n");
            return -1;
    }
}

void print_binary(char hexDigit){
    int num = hex_to_dec(hexDigit);
    if(num == -1){
        return;
    }
    else{
        printf("COMPLETE HEX TO BINARY FUNCTION");
    }
    printf("\n\n");
}

int main(){
    char hexDigit;
    while(1){
        printf("Type a hexadecimal digit, or X to quit: \n");
        scanf(" %c", &hexDigit);

        //stops if input is equal to X
        if(hexDigit == 88){
            break;
        }

        print_binary(hexDigit);
    }
    printf("Goodbye!\n");
    return 0;
}
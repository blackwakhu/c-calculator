#include<stdio.h>
#include<stdlib.h>

// macros that will perform the simple expressions
#define sum(a, b) (a + b)
#define subtract(a, b) (a - b)
#define product(a, b) (a * b)
#define divide(a, b) (a / b)

int main(int argc, char *argv[]){
    char choice = {argv[1][0]};
    switch(choice){
        case '+':
        case 'a':
        case 'A':
            printf("%s + %s = %d\n", argv[2], argv[3], sum(atoi(argv[2]), atoi(argv[3])));
            break;
        case '-':
        case 's':
        case 'S':
            printf("%s - %s = %d\n", argv[2], argv[3], subtract(atoi(argv[2]), atoi(argv[3])));
            break;
        case '*':
        case 'p':
        case 'P':
        case 'x':
            printf("%s * %s = %d\n", argv[2], argv[3], product(atoi(argv[2]), atoi(argv[3])));
            break;
        case '/':
        case 'd':
        case 'D':
            printf("%s / %s = %.4f\n", argv[2], argv[3], divide((float)atoi(argv[2]), (float)atoi(argv[3])));
            break;
        default:
            printf("you have entered an none existent function\nchoose the following\n\ta, +\t\taddition\n\ts, -\t\tsubtract\n\tp, x, *\t\tproduct\n\td, \\\t\tdivide\n");
    }
    return 0;
}

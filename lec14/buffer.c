#include <stdio.h>
#include <unistd.h>

int main(){
    char in1, in2, in3;
/*
    in1 = getchar();
    in2 = getchar();
    in3 = getchar();

    printf("%c", in1);
    printf("%c", in2);
    printf("%c", in3);
    */
    putchar('a');
//    scanf("%c", &in1);// release buffer
    sleep(3);
    putchar('b');
  //  putchar('\n');
    putchar('c');
}



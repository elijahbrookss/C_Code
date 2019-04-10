#include <stdio.h>



int rec(int num){
    if (num<=1)return 1;



    return num * rec(num -1);
}

#include <stdio.h>

FILE *info_read;

void rclass_1(){
    info_read = fopen("db/student/class-10.txt","r");
}
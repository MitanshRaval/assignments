#include<stdio.h>

void getusername(char name[]){
    printf("%c%c\n",name[0],name[6]);
}

void main(){
    char name[]="Virat Kohli";
    getusername(name);


}
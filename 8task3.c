#include<stdio.h>
#include<string.h>

void addtocart(char cart[][20],int *size,char product[]){
    strcpy(cart[*size],product);
    (*size)++;
}
int main(){
    char cart[10][20]={"laptop","mouse"};
    int size=2;
    addtocart(cart,&size,"keyboard");
    printf("cart:\n");
    for(int i=0;i<size;i++){
        printf("%s\n",cart[i]);

    }
    return 0;
}
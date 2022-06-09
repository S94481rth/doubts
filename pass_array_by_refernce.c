#include<stdio.h>

change_array(int *pointer){
    int j;
    for(j=0;j<5;j++){
        *pointer++;
        pointer++;
    }
}

int main(){
    int i,array[5]={1,2,3,4,5};
    int *p = &array[0];
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    printf("\n\n");
    
    change_array(p);

    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
}


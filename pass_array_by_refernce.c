#include <stdio.h>
void myfuncn( int *var1, int var2)
{
    int x;
    for(x=0; x<var2; x++)
    {
        *var1+=10;
        var1++;
    }
}
int main()
{
     int i,j,var_arr[] = {11, 22, 33, 44, 55, 66, 77};
     for(i=0;i<7;i++){
        printf("%d ",var_arr[i]);
     }
     printf("\n");
     myfuncn(var_arr, 7);
     for(j=0;j<7;j++){
        printf("%d ",var_arr[j]);
     }
     return 0;
}


//
//
//
//
//
//


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

    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    printf("\n\n");

    change_array(&array);

    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
}

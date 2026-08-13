#include<stdio.h>
int main(){
int arr1[3][3],arr2[3][3],arr3[3][3];
int i,j;

printf("Enter numbers for matrix arr1:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        scanf("%d",&arr1[i][j]);

    }

}

printf("Enter numbers for matrix arr2:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        scanf("%d",&arr2[i][j]);

    }
}

printf("Sum of this two arrays is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
     }

}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
   printf("%d\t",arr3[i][j]);



    }
    printf("\n");
}
return 0;
}

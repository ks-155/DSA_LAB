#include<stdio.h>

    int main(){
        //declare 3*3 arrays
        long int arr1[3][3],arr2[3][3],arr_sum[3][3];
       
        //accept two 3*3 arrays;
        printf("enter array1:\n");
              
        for(int i=0;i<3;i++){
           
            for(int j=0;j<3;j++){
                  
                scanf("%ld",&arr1[i][j]);
            }
            
           
        }
          printf("enter array2:\n");
        for(int i=0;i<3;i++){
           
            for(int j=0;j<3;j++){
                scanf("%ld",&arr2[i][j]);
            }
            
            
        }
        for(int i=0;i<3;i++){
           
            for(int j=0;j<3;j++){
                arr_sum[i][j]=arr1[i][j]+arr2[i][j];
            }
            
        }
          printf("output:\n");
         for(int i=0;i<3;i++){
           
            for(int j=0;j<3;j++){
                printf("%ld\t",arr_sum[i][j]);
            }
            printf("\n");
        }

    }
       
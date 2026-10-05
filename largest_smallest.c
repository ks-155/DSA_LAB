#include <stdio.h>
int main(){
int arr1[]={6,2,3,5,7,1};
int max=arr1[0];
int min=arr1[0];
int secondlargest=arr1[0];
int secondsmallest=arr1[0];

//for largest element
for(int i=0;i<(sizeof(arr1)/sizeof(1));i++){
	if(max<arr1[i]){
		max=arr1[i];
		
				}		
	}
	//for smallest element
	for(int i=0;i<(sizeof(arr1)/sizeof(1));i++){
	if(min>arr1[i]){
		min=arr1[i];
				
	}
	
	}
    //for second largest
    for(int i=0;i<(sizeof(arr1)/sizeof(1));i++){
                 if(secondlargest<arr1[i] && arr1[i]!=max){
                secondlargest=arr1[i];

            }

        }
    //for second smallest 
    for(int i=0;i<(sizeof(arr1)/sizeof(1));i++){
                 if(secondsmallest>arr1[i] && arr1[i]!=min){
                secondsmallest=arr1[i];

                 }
                }   

    
printf("%d\n",min);
printf("%d\n",max);
printf("%d\n",secondlargest);
printf("%d",secondsmallest);




}

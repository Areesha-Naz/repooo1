#include <stdio.h>
int main(){
int arr[]= {1,2,3,4};
int target;
int found=0;
printf('Enter the target');
scanf("%d",target);
for (int i=0; i,size ; i++){
    if(arr[i]==target){
        printf("target %d found at index %d",target,i);
        found=1;
        break;
    }
}
if(found==0){
    printf("target not found");

}
return 0;
}


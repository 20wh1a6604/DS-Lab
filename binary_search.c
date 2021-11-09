#include<stdio.h>
int binary_search(int a[],int key,int low ,int high ){
int mid = (low +high)/2;
    while(low <= high){
         if(a[mid] > key){
             high = mid-1;
             }
          else if(a[mid] < key){
              low = mid + 1;
              }
          else{ 
               return mid;
               }
    }
    return -1;
    }
    int main(){
     int n, i,pos,key, low, high;
     int a[20];
     printf(" enter the  number of keys");
     scanf("%d",&n);
     printf(" enter the keys: ");
     for (i = 0 ; i<n ; i++){
          scanf("%d" , & a[i]);
          }
    printf(" enter the key is searched : ");
           scanf("%d",&key);
           pos = binary_search( a, key,low,high);
           if (pos=-1){
               printf("key is not found: ");
               }
               else{
               printf("key is found: ");
               }
}


     

 
     


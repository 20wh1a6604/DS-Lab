#include<stdio.h>
int i=0;
int linearsearch1(int n,int a[30],int key){
    if(a[i]= ele){
       return i;
       }
    else if(i<n){
           i++;
           linearsearch1(n,a,key);
    }
    else if(i>n){
           return-i;
    }
}
int main(){
    int n,i,pos,key;
    int a[30];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter element to be searched:");
    scanf("%d",&ele);
    printf("enter elements:");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       } 
   pos = linearsearch1(n,a,key);
   if(pos ==-1){
     printf("element is not found");
     }
   else{
       printf("element is foundat position %d",pos+1);
   }
   }
    

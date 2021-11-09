#include<stdio.h>
int linearsearch(int n,int a[30],int key){
    int pos = -1;
    for( int i=0;i<n;i++){
       if(a[i] == key){
         pos = i;
         break;
       }
    }
    if(pos ==-1){
      return -1;
    }
    else{
        return pos;
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
   pos = linearsearch(n,a,key);
   if(pos ==-1){
     printf("element is not found");
     }
   else{
       printf("element is foundat position %d",pos+1);
   }
   }
    

#include<stdio.h>
int sort(int a[30],int n){
    int i,t;
    for(i=0;i<n;i++){
       if(a[i] > a[i+1]){
       t = a[i];
       a[i] = a[i+1];
       a[i+1] = t;
         return(a[i] = a[i+1]);
         }
       }
}       
int main(){
    int p,a[30],n,i;
    printf("enter no:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    p = sort(a,n);
    printf("sorted:%d",p);
}    


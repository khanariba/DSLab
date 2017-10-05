#include<stdio.h>
#define MAX_SIZE 20
int hash(int k){
return k % MAX_SIZE;
}
int collision_res(int h){
}
void display(int a[]){
 printf("\nThe elements of Array are\n");
  for(i=0;i<MAX_SIZE;i++)
int main(){
   int a[20],i,h,e,count;
   for(i=0;i,20;i++)
    a[i]=-1;
   do{
      count=0;
     printf("\nENTER THE NUMBER TO BE STORED");
     scanf("%d",&e);
     h=hash(e);
     if(a[h]==-1)
      a[h]=e;
     else 
    {
    while(count<=20){
        count++;
        h=collision_res(h);
        if(a[h]==-1)
         {
           a[h]=e;
           break;
         }
     }
 }
  if(count==20)
{
  printf("\nArray is full")
      return0;


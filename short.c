#include<stdio.h>
int main(int argc, char const *argv[])
{
   int n;
   printf("Enter the number of element in the arry\n");
   scanf("%d",&n);
   int a[n];
   for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int m,loc=-1;
   printf("enter the number that you want to search");
   scanf("%d",&m);
   for(int j=0;j<n;j++){
    if(m==a[j]){
        loc= j;
        break;}}
        if (loc != -1)
        {printf("item found at %d",loc);}
    else{
        printf("Item is not found");
        }
    
   
   

    return 0;
}

#include <stdio.h>
int sumof(int *a,int l,int r,int sum);
int total;
int sumof(int *a,int l,int r,int sum){
	
	
	
	if(l>r)
	{printf("%d\n",sum);
		total=total+sum;
		return;
	}
	
	sumof(a,l+1,r,sum+a[l]);
	sumof(a,l+1,r,sum);
}
int main(void){
   int *n;
   int num,sumof=0;
   scanf("%d",&num);
   n=malloc(num * sizeof(int));
   for(int i=0;i<num;i++){
   	scanf("%d",&n[i]);
   }		
   sumof(n,0,num-1,0); 	
   printf("%d",total);
   return 0;
}

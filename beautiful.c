#include <stdio.h>

int main(void) {
	int n,rcount=0,count=0;
	char str[50][50];
	char c[50];
	scanf("%d",&n);
	//char *c=malloc(n*sizeof(char));
	for(int i=0;i<n;i++)
	    scanf("%s",str[i]);
	for(int i=0;i<n;i++)
	 {  
	 	
	 	 
	 	count=0;
	 	rcount=0;
	 	for(int j=1;str[i][j]!='\0';j++){
	 		if(str[i][j]==str[i][j-1]){
	 			
	 		
	 		count++;}
	 		else {if(count>0){
	 		count=count+1;
	 		rcount=rcount+(count/2);
	 		count=0;
	 		}}
	 	}
	 	printf("%d\n",rcount);
	 }
	return 0;
}

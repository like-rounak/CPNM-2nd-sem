#include<stdio.h>
#include<math.h>

int main(){
	int base , exp, res;

	printf("Base:");
	scanf("%d",&base);


	printf("Exponent:");
	scanf("%d",&exp);

	res= pow(base,exp);
	printf("%d",res);

	return 0;
}

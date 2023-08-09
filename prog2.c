#include<stdio.h>

int add(int x , int y);
int sub(int x , int y);
int multiply(int x , int y);
int div(int x , int y);

int main(){
	int a,b,c;
	char operator;
	printf("Enter two Numbers , with an operator :");
	scanf("%d %d %c", &a , &b, &operator);

	switch(operator){
		case '+':
			c=add(a,b);
			printf("%d",c);
			break;
		
		case '-':
			c=sub(a,b);
			printf("%d",c);
			break;
		case '*':
			c=multiply(a,b);
			printf("%d",c);
			break;
		case '/':
			c = div (a , b);
			printf("%d",c);
			break;
		default:
			printf("Invalid Operator");
	}
		
	return 0;
}

int add(int x , int y){
	return x + y ;
}

int sub(int x , int y){
	return x - y ;
}

int multiply(int x , int y ){
	return x * y ;
}

int div(int x , int y){
	return x / y ;
}


           

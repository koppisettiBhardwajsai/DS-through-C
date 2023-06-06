//#include<stdio.h>
//int a=10;//global variable
//void fun(){
//	printf("From fun() function:%d\n",a);
//}
//int main(){
//	fun();
//	printf("From main() function:%d",a);
//}

//global variable for arrays
#include<stdio.h>
int a[5];
void read(){
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
}
int main()
{
	read();
	int i;
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}

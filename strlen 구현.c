//ex00

//#include<stdio.h>

/*int main() {
	int s ;
	double aver=0, Max = 0;
	scanf("%d", &s);
    double sejun[s];
	for (int i = 0; i < s; i++) {
		scanf("%lf", &sejun[i]);
		if (Max < sejun[i]) {
			Max = sejun[i];
		}
	}
	for (int i = 0; i < s; i++) {
		sejun[i] = (sejun[i] / Max) * 100;
		aver += sejun[i];
	}

	printf("%0.2lf", aver/s);

}*/

//ex01
/*#include<stdio.h>

int strlen(char a[]){
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	return i;
}

int main(){
	char arr[100];
	scanf("%s",arr);
	printf("%d",strlen(arr));
}*/

//ex02


//const는 상수, 즉 변하지 않는 값으로 하는 것 

/*char* strcpy(char* dest,const char* origin){
	int i=0;
	
	while(origin[i]!='\0'){
		dest[i]=origin[i];
		i++;
	}
	return dest;
}

#include<stdio.h>

int main(){
	char arr[100];
	scanf("%s",&arr);
	char origin[100];
	printf("%s",strcpy(arr,origin));
}*/


//ex03
/*재귀함수는 자기 자신을 리턴하는 함수이다.
재귀로 돌리는 것은 거의 다 for문으로 돌릴 수 있고 재귀가 시간을 더 잡아먹지만 
코드는 재귀가 for문보다 깔끔하고 아름답게 보인다.*/

//ex04 
/*void recursive(int n){
	recursive(n);
}*/
//위에 코드는 재귀될 때마다 위로 한 번씩 쌓인다.



//ex05
/*int fibonacci(int n){
 	if(n==0)return 0;
 	else if(n==1)return 1;
 	return fibonacci(n-1)+fibonacci(n-2);
 }*/
 //함수가 계속 실행될때마다 2의 제곱이 된다. O(2^n) 입력받는
 //n의 값이 커질때마다 필요한 연산이 기하급수적으로 늘어나게된다. 
  
  
  
//ex06

//하노이 탑(실패) 
#include<stdio.h>

void hanoi_top(int k,int from,int to,int other){
	if(k==0)return ;
	return (k-1,from,other,to);
	printf("%d %d\n",other,from);
	return (k-1,other,to,from);
}

int main(){
	int k;
	scanf("%d",&k);
	hanoi_top(k,0,2,1);
	
}

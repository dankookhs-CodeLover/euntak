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


//const�� ���, �� ������ �ʴ� ������ �ϴ� �� 

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
/*����Լ��� �ڱ� �ڽ��� �����ϴ� �Լ��̴�.
��ͷ� ������ ���� ���� �� for������ ���� �� �ְ� ��Ͱ� �ð��� �� ��Ƹ����� 
�ڵ�� ��Ͱ� for������ ����ϰ� �Ƹ���� ���δ�.*/

//ex04 
/*void recursive(int n){
	recursive(n);
}*/
//���� �ڵ�� ��͵� ������ ���� �� ���� ���δ�.



//ex05
/*int fibonacci(int n){
 	if(n==0)return 0;
 	else if(n==1)return 1;
 	return fibonacci(n-1)+fibonacci(n-2);
 }*/
 //�Լ��� ��� ����ɶ����� 2�� ������ �ȴ�. O(2^n) �Է¹޴�
 //n�� ���� Ŀ�������� �ʿ��� ������ ���ϱ޼������� �þ�Եȴ�. 
  
  
  
//ex06

//�ϳ��� ž(����) 
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

#include <stdio.h>
//20220507 CPP 1, XOR Secure 
int main (void) {
	int v, y, z;
	char original[100];
	char encrypted[100];
	char key[100];
	// 변수 선언 
	
	printf("Input the original : ");
	scanf ("%s",original);
	printf("input the key : ");
	scanf ("%s",key);
	// 암호화할 key, 원문 입력받음 
	
	for (v=0; original[v]!='\0'; v++) {
		original[v] = original[v] ^ key[v];
	}
	// 암호화 (0에서 시작하여, original 의 v번째 방이 NULL이 될때까지 반복, XOR 로 각 방 반전 
	
	printf ("Output is : %s\n\n",original);
	// 암호화 종료 
	
	printf("input the key : ");
	scanf ("%s",key);
	// 복호화 시작,key 입력받 음  
	
	for (v=0; original[v]!='\0'; v++) {
		original[v] = original[v] ^ key[v];
	}
	//복호화 (0에서 시작하여, original의 v번째 방이 NULL이 될때까지 반복, XOR 로 각 방 반전 
	 
	
	printf ("Decrypted Output is : %s",original);
	// 복호화 종 료  
}

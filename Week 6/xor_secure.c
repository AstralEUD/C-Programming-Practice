#include <stdio.h>
//20220507 CPP 1, XOR Secure 
int main (void) {
	int v, y, z;
	char original[100];
	char encrypted[100];
	char key[100];
	// ���� ���� 
	
	printf("Input the original : ");
	scanf ("%s",original);
	printf("input the key : ");
	scanf ("%s",key);
	// ��ȣȭ�� key, ���� �Է¹��� 
	
	for (v=0; original[v]!='\0'; v++) {
		original[v] = original[v] ^ key[v];
	}
	// ��ȣȭ (0���� �����Ͽ�, original �� v��° ���� NULL�� �ɶ����� �ݺ�, XOR �� �� �� ���� 
	
	printf ("Output is : %s\n\n",original);
	// ��ȣȭ ���� 
	
	printf("input the key : ");
	scanf ("%s",key);
	// ��ȣȭ ����,key �Է¹� ��  
	
	for (v=0; original[v]!='\0'; v++) {
		original[v] = original[v] ^ key[v];
	}
	//��ȣȭ (0���� �����Ͽ�, original�� v��° ���� NULL�� �ɶ����� �ݺ�, XOR �� �� �� ���� 
	 
	
	printf ("Decrypted Output is : %s",original);
	// ��ȣȭ �� ��  
}

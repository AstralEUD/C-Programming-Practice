#include <stdio.h>
#include <string.h>
/* String Decryption & Encryption Tool */
int key[15] = {1,2,1,1,3,2,1,4,2,0};
// Key as Global variable
char encrypt_one (char tgt, int num) {
	int i, n = 0;
	char res;
	i = num%10;
	res = tgt + key[i];
	return res;
}

char decrypt_one (char tgt, int num) {
	int i, n = 0;
	char res;
	i = num%10;
	res = tgt - key[i];
	return res;
}

void printChar (char array[]) {
	int i;
	int length = strlen(array);
	for (i=0; array[i] != '\0'; i++) {
		printf("%c",array[i]);
	}
}

void encrypt_all (char *string) {
	int i, length;
	length = strlen(string);
	for (i=0; i<length; i++) {
		*string = encrypt_one(*string,i);
		string++;
	}
	//printChar(string);
}

void decrypt_all (char *string) {
	int i, length;
	length = strlen(string);
	for (i=0; i<length; i++) {
		*string = decrypt_one(*string,i);
		string++;
	}
	//printChar(string);
}

void main () {
	char string[100] = "";
	while (1) {
		printf("\n암호화 할 문자열을 입력하세요 ...");
		gets(string);
		printf("암호화 결과 : ");
		encrypt_all(string);
		printChar(string);
		printf("\n복호화 결과 : ");
		decrypt_all(string);
		printChar(string);
	}
}

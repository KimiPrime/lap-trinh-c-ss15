#include <stdio.h>
#include <string.h>

int main(){
	char text[]="hfdf23@r4r!";
	int countCharText=0;
	int countCharNum=0;
	int countcharSpecial=0;
	int size= strlen(text);
	for(int i=0;i<size;i++){
		if(isalpha(text[i])){
			countCharText++;
		}else if(isdigit(text[i])){
			countCharNum++;
		}
	}
	printf("\n so luong ki tu chu trong chuoi ban dau la %d",countCharText);
	printf("\n so luong ki tu so trong chuoi ban dau la %d",countCharNum);
	printf("\n so luong ki tu dac biet trong chuoi ban dau la %d",size - countCharText-countCharNum);
}

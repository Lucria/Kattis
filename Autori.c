#include<stdio.h>
#include<string.h>


int main(void){
	char input[101], *split;
	int len;

	scanf("%s", input);
	len=strlen(input);
	if(input[len-1]=='\n'){
		input[len-1]='\0';
	}

	//1st method
	split=strtok(input, "-");
	while(split!=NULL){
		printf("%c", *split);
		split=strtok(NULL, "-");
	}

	/*2nd method
	printf("%c", input[0]);
	for(i=1; i<len-1; i++){
		if(input[i]=='-'){
			printf("%c", input[i+1]);
		}
	}*/

	printf("\n");

	return 0;

}
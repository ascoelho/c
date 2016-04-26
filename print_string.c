#include <stdio.h>
#include <string.h>
int main(){

	char name[20];
	printf("\nWhat is your first name?: ");
	scanf("%s",name);
	printf("\nYour name is: %s and the total number of characters is: %lu\n",name,strlen(name));

}


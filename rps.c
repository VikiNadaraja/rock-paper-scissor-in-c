#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	char computer[3] = {'p','r','s'};
	char user;
	srand(time(0));
	int random = rand() % 3;
	
	printf("(r,p,s): ");
	scanf(" %c", &user);
	printf("User = %c\n", user);
	printf("Computer = %c\n", computer[random]);
	
	if(user == computer[random]){
		printf("Draw!");
	}else if((user == 'p' && computer[random] == 'r') ||
			(user == 'r' && computer[random] == 's') ||
			(user == 's' && computer[random] == 'p')){
		printf("Computer win!");
	}
	else{
		printf("User win!");
	}
	return 0;
	
}

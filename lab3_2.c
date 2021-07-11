#include <stdio.h>

#define DIGITS 16
int check_card_number(char *str);


int main(int argc, char *argv[]){
	int i, res;
	
	if (argc < 2)
		printf("please provide the 16-digit credit card numbers\n");
	else
		for (i = 1; i < argc; i++){
			res = check_card_number(argv[i]);
			printf("Card %s is %s\n", argv[i], (res == 1) ? "valid" : "invalid");
		}
	return 0;
}


int check_card_number(char *str)
{
	int i, pos = 1;
	int sum = 0;
	int num_int;
	

	for (i=DIGITS-1; i>=0; i--, pos++){
		num_int = (int)(*(str+i) - '0');    
		if (pos % 2 == 0){
	 
			
			if (num_int >= 10)
				num_int = num_int - 9;
		}
	}
	if (sum % 10 == 0)
		return 1;
	else
		return 0;
}
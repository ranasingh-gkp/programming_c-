// C program to illustrate
// strcmp() function (=0zero)
#include<stdio.h>
#include<string.h>

int main()
{

	char leftStr[] = "g f g";
	char rightStr[] = "g f g";

	// Using strcmp()
	int res = strcmp(leftStr, rightStr);

	if (res==0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");

	printf("\nValue returned by strcmp() is: %d" , res);
	return 0;
}


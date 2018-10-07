// C program to illustrate
// strcmp() function
#include<stdio.h>
#include<string.h>
int main()
{
	// z has greater ASCII value than g
	char leftStr[] = "zfz";
	char rightStr[] = "gfg";

	int res = strcmp(leftStr, rightStr);

	if (res==0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");

	printf("\nValue of result: %d" , res);

	return 0;
}

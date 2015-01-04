/*	Author: Parker Mathewson
 *	Date: 2/24/12
 *	comment: This is the string comparison problem using pointers
 *		Along with strings to figure out how many strings of
 *		"the" there are in a test file provided.
 */

#include<stdio.h>
#include <stdlib.h>

int compare_string(char* s1, char* s2)
{
	int i=0;
	int strlen;

	//s1=searchstring
	//s2=inputstring

	strlen=50;

	if(*(s1+i)==*(s2+i))
		if(*(s1+i+1)==*(s2+i+1))
			if(*(s1+2)==*(s2+2))
				return(1);
			else
				return(0);
		else
			return(0);
	else
		return(0);

}


int main(void)
{
	char* search_string = "the";
	FILE *input_file;
	char* input_string;
	int i=0, j=0;
	int counter=0;

	input_string=(char *)malloc(50* sizeof (char));

	input_file = fopen("data.txt","r");
	if(input_file == NULL) printf("Error reading file.");
	else
	{
		while(fscanf(input_file, "%s", input_string) != EOF)
		{
			i=compare_string(search_string, input_string);
			j=j+i;
		}
	}
							//the counters show only 349 comparisons. BAD as that is half of the 697 words being "read"
	printf("There were %d occurences of \"the\"\n",j);
	fclose(input_file);
	free(input_string);

	return(0);
}

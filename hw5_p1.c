/*	Author: Parker Mathewson
 *	Date: 2/24/12
 *	Comments: This is a program that uses pointers to return 2 values 
 *		and updates those values from a different function than
 *		then main. This function calculates sum and average.
 */

#include<stdio.h>

int calc(float x, float y, float z, float b, float* sum_ptr, float* 
average_ptr)
{
	float sum=0;
	float average=0;

	sum =(b+z+x+y);
	average = (sum)/4;

	*sum_ptr = sum;
	*average_ptr = average;

	return(0);
}

int main(void)
{
	float num_1, num_2, num_3, num_4;
	float* sum_ptr;
	float* average_ptr;
	float sum=0;
	float average=0;

	sum_ptr = &sum;
	average_ptr = &average;

	printf("Please print your first number: ");
	scanf("%f", &num_1);

	fflush(stdin);
	printf("Please print your second number: ");
	scanf("%f", &num_2);

	fflush(stdin);
	printf("Please print your third number: ");
	scanf("%f", &num_3);

	fflush(stdin);
	printf("Please print your fourth number: ");
	scanf("%f", &num_4);
	fflush(stdin);

	calc(num_1,num_2,num_3,num_4,sum_ptr,average_ptr);

	printf("Your sum is %.2f", *sum_ptr);
	printf("\nYour average is %.2f\n", *average_ptr);

	return(0);
}

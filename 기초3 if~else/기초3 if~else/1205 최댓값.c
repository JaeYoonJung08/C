#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double one, two;
	double sum, sum1, minus, minus1, mult, mult1, divide, divide1;
	//double myself;
	double compare;
	scanf("%lf %lf", &one , &two );


	 sum = one + two;
	 compare = sum;

	 if (compare < (sum = two + one))
	 {
		 compare = sum;
	 }
	 if (compare < (sum = one - two))
	 {
		 compare = sum;
	 }
	 if (compare < (sum = two - one))
	 {
		 compare = sum;
	 }//����
	 if (compare < (sum = one * two))
	 {
		 compare = sum;
	 }
	if (compare < (sum = two * one))
	 {
		 compare = sum;
	 }//����
	 if (compare < (sum = one / two))
	 {
		 compare = sum;
	 }
	 if (compare < (sum =  two / one))
	 {
		 compare = sum;
	 }// ������
	 else
	 {
		 divide = two;
		 divide1 = one;
		 minus = one;
		 while (divide)
		 {
			 if (divide < 0 || divide == 0)
			 {
				 break;
			 }
			 divide--;
			 if (divide == 0)
			 {
				 break;
			 }
			 divide1 = divide1 * minus;
		 }

		 sum = divide1;
		 if (compare < sum)
		 {
			 compare = sum;
		 }

		 divide1 = two;
		 minus = two;

		 divide = one;
		 while (divide)
		 {
			 if (divide < 0 || divide == 0)
			 {
				 break;
			 }
			 divide--;
			 if (divide == 0)
			 {
				 break;
			 }
			 //divide1 * divide1;
			 divide1 = divide1 * minus;

		 }
		 sum = divide1;
		 if (compare < sum)
		 {
			 compare = sum;
		 }
	 }
	 printf("%.6lf", compare);
	 /*
	 if (compare < sum)
	 {

	 }
	 //������� ����

	 sum = one - two;
	 if (compare < sum)
	 {
		 compare = sum;
	 }
	 
	 sum = two - one;
	 if (compare < sum)
	 {
		 compare = sum;
	 }
	 //����

	 sum = one * two;
	 if (compare < sum)
	 {
		 compare = sum;
	 }
	 
	 sum = two * one;
	 if (compare < sum)
	 {
		 compare = sum;
	 }
	 
	 //���ϱ�

	 sum = one / two;
	 if (compare < sum)
	 {
		 compare = sum;
	 }


	 sum = two / one;
	 if (compare < sum)
	 {
		 compare = sum;
	 }
	 //������

	 divide = two;
	 divide1 = one;
	 while (divide)
	 {
		 divide--;
		 if (divide == 0)
		 {
			 break;
		 }
		 divide1 *= divide1;
		 
		 
	 }
	 sum  = divide1;
	 if (compare < sum)
	 {
		 compare = sum;
	 }

	 divide1 = two;
	 divide = one;
	 while (divide)
	 {
		 divide--;
		 if (divide == 0)
		 {
			 break;
		 }
		 divide1 *= divide1;
		 

	 }
	 sum = divide1;
	 if (compare < sum)
	 {
		 compare = sum;
	 }

	 printf("%.6lf", compare);


	 */



}
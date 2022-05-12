#include<stdio.h>
int main()
{
	printf("Choose an item: \n1. Pizza,Rs. 239\n2. Burger,Rs. 129\n3. Pasta,Rs. 179\n4. French Fries,Rs. 99\n5. Sandwich,Rs. 149\n");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Food item-Pizza\n Price-Rs 239\n");
			break;
		case 2:
			printf("Food item-Burger\n Price-Rs 129");
			break;
		case 3:
			printf("Food item-Pasta\n Price-Rs 179");
			break;
		case 4:
			printf("Food item-French Fries\n Price-Rs 99");
			break;
		case 5:
			printf("Food item-Sandwich\n Price-Rs 149");
			break;
	}
}

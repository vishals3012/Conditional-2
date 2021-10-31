#include<stdio.h>
int main()
{
	int a;
	printf("1.Pizza Rs.239 2.Burger Rs.129 3.Pasta Rs.179 4.French Fries Rs.99 5.Sandwich Rs.149");
	printf("Enter the menu:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Pizza Rs.239");
			break;
		case 2:
		    printf("Burger Rs.129");
			break;
		case3:
		    printf("Pasta Rs.179");
			break;
		case 4:
		    printf("Frenchfries Rs.99");
			break;
		case 5:
		    printf("Sandwitch Rs.149");
			break;
			default:
			printf("the menu is not ordered");				
	}
}

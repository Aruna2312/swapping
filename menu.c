#include<stdio.h>
main()
{
printf("TODAY\'S MENU\n1.Pizza, Rs.239\n2.Burger, Rs.129\n3.Pasta, Rs.179\n4.French Fries, Rs.99\n5.Sandwich, Rs.149\n ");
printf("enter your choice:\b");
int opt=0;
scanf("%d",&opt);
switch(opt)
{
	case 1:printf("you have chosen pizza\n so do you need 11.veg pizza or 12.non-veg pizza\n" );
	printf("enter your choice:\b ");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 11:printf("So you have ordered a veg pizza\nIts price is Rs.239");
		break;
		case 12:printf("So you have ordered a non-veg pizza\nIts price is Rs.239");
		break;
		default:printf("Your choice is not in the menu");	
		}
	break;
	
	case 2:printf("you have chosen burger\n so do you need 21.veg burger or 22.non-veg burger\n" );
	printf("enter your choice:\b ");
	int option=0;
	scanf("%d",&option);
	switch(option)
	{
		case 21:printf("So you have ordered a veg burger\nIts price is Rs.129");
		break;
		case 22:printf("So you have ordered a non-veg burger\nIts price is Rs.129");
		break;
		default:printf("Your choice is not in the menu");	
		}
	break;
	
	case 3: printf("you have ordered pasta\nIts price is Rs.179");
	break;
	case 4: printf("you have ordered French Fries\nIts price is Rs.99");
	break;
	case 5:printf("you have chosen sandwich\n so do you need 51.veg sandwich or 52.non-veg sandwich\n" );
	printf("enter your choice:\b ");
	int opinion=0;
	scanf("%d",&opinion);
	switch(opinion)
	{
		case 51:printf("So you have ordered a veg sandwich\nIts price is Rs.149");
		break;
		case 52:printf("So you have ordered a non-veg sandwich\nIts price is Rs.149");
		break;
		default:printf("Your choice is not in the menu");	
		}
	break;
	default:printf("Your choice is not in the menu");	
	}	
}

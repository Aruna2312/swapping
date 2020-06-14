
main()
{
	printf("WELCOME TO BIT ELEMENTARY SCHOOL \n ");
	printf("Enter the mark you have obtained:\t");
	int mark=0;
	scanf("%d",&mark);
	if(mark<=100 && mark>=85)
	{
	printf("your grade is A");
	}
	else if(mark<=84 && mark>=70)
	{
	printf("your grade is B");
	}
	else if(mark<=69 && mark>=55)
	{
	printf("your grade is C");
	}
	else if(mark<=54 && mark>=40)
	{
	printf("your grade is D");
	}
	else
	{
	printf("your grade is F");
	}
}

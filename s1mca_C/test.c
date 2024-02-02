#include <stdio.h>
#include <stdlib.h>








void main()
{
	int n;
	printf("1.Creation \n2.Display\n3.Insertion at a particular position\n4.delete at beg \n5.delete at end \n6.delete at particular pos\n7.exit \n");

	while (1)
	{
		printf("\n Enter your choice : ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			insertion();
			break;

		case 2:
			display();
			break;

		// case 3:
		// 	insertat();
		// 	break;

		// case 4:
		// 	deletebeg();
		// 	break;

		// case 5:
		// 	deleteend();
		// 	break;
		// case 6 :
		// 	display(); 
		// 	deleteat();
		// 	break;

		case 7:
			exit(0);
			

		default:
			printf("enter a valid choice!!");
			break;
		}
	}
}

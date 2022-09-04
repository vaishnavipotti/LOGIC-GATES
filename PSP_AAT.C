#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int AND(int,int);
int AND(int a,int b)
{
	int res;
	if((a==0||a==1)&&(b==0||b==1))
	{
		res=a*b;
		printf("%d AND %d=%d",a,b,res);
	}
	else
		printf("invalid input");
	return res;
}

int OR(int,int);
int OR(int a,int b)
{
	int res;
	if((a==0||a==1)&&(b==0||b==1))
	{
		if(a==0&&b==0)
		  {
			printf("%d OR %d=0",a,b);
			return 0;
		  }
		else
		 {
		   printf("%d OR %d=1",a,b);
		   return 1;
		 }
	}
	else
		printf("invalid input");

}

int NOT(int);
int NOT(int a)
{
	int res;
	if(a==0||a==1)
	{
		res=!a;
		printf("%d NOT=%d",a,res);
	}
	else
		printf("invalid input");
	return res;
}

int BUFFER(int);
int BUFFER(int a)
{
	int res;
	if(a==0||a==1)
	{
		res=a;
		printf("%d BUFFER=%d",a,res);
	}
	else
		printf("invalid input");
	return res;
}

int NAND(int,int);
int NAND(int a,int b)
{
	int res;
	if((a==0||a==1)&&(b==0||b==1))
	{
		res=!(a*b);
		printf("%d NAND %d=%d",a,b,res);
	}
	else
		printf("invalid input");
	return res;
}

int NOR(int,int);
int NOR(int a,int b)
{
	int res;
	if((a==0||a==1)&&(b==0||b==1))
	{
		res=!(a+b);
		printf("%d NOR %d=%d",a,b,res);
	}
	else
		printf("invalid input");
	return res;
}

int XNOR(int,int);
int XNOR(int a,int b)
{
	int res;
	if((a==0||a==1)&&(b==0||b==1))
	{
		res=(a*b)+((!a)*(!b));
		printf("%d XNOR %d=%d",a,b,res);
	}
	else
		printf("invalid input");
	return res;
}

int XOR(int,int);
int XOR(int a,int b)
{
	int res;
	if((a==0||a==1)&&(b==0||b==1))
	{
		res=(a*(!b))+((!a)*b);
		printf("%d XOR %d=%d",a,b,res);
	}
	else
		printf("invalid input");
	return res;
}

void main()
{
	int a,b,res,choice;
	char ch;
	clrscr();
	do
	{
		printf("\n\nMAIN MENU\n");
		printf("\n1.AND\n2.OR\n3.NOT\n4.BUFFER\n5.NAND\n6.NOR\n7.XNOR\n8.XOR\n9.EXIT\n\n");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice)
		{
			case 1:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   printf("\nEnter the second input:");
				   scanf("%d",&b);
				   res=AND(a,b);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 2:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   printf("\nEnter the second input:");
				   scanf("%d",&b);
				   res=OR(a,b);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 3:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   res=NOT(a);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 4:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   res=BUFFER(a);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 5:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   printf("\nEnter the second input:");
				   scanf("%d",&b);
				   res=NAND(a,b);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 6:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   printf("\nEnter the second input:");
				   scanf("%d",&b);
				   res=NOR(a,b);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 7:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   printf("\nEnter the second input:");
				   scanf("%d",&b);
				   res=XNOR(a,b);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 8:printf("\nEnter the first input:");
				   scanf("%d",&a);
				   printf("\nEnter the second input:");
				   scanf("%d",&b);
				   res=XOR(a,b);
				   if(res==1)
						printf("\nTRUE");
				   else if(res==0)
						printf("\nFALSE");
				   break;
			case 9:printf("Exiting the program!!!");
				   exit(0);
			default:printf("\nInvalid choice!!!");
		}
		printf("\n Do you want to continue y/Y or n/N");
		scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
	return 0;

}
#include<stdio.h>
#include<conio.h>
int i,j;
void A(int line)
{
	i=line;
		for(j=1;j<=5;j++){
			if(i==2||i==3||i==5||i==6||i==7)
			{
				if(j==1||j==5)
					printf("*");
				else printf(" ");
			}
			else if(i==4)
				printf("*");
			else{
				if(j==1||j==5)
					printf(" ");
				else printf("*");
			}
		}
		printf("\t");

}
void B(int line)
{
		i=line;
		for(j=1;j<=5;j++)
		{
			if(i==2||i==3||i==5||i==6)
			{
				if(j==1||j==5)
					printf("*");
				else printf(" ");
			}
			else if(i==4)
			{
				if(j==5)
					printf(" ");
				else printf("*");
			}
			else
			{
				if(j==1||j==5)
					printf(" ");
				else printf("*");
			}
		}
		printf("\t");

}
void C(int line)
{
	i=line;
	for(j=1;j<=5;j++)
	{
		if(i==2||i==3||i==4||i==5||i==6)
		{
			if(j==1)
				printf("*");
			else printf(" ");
		}
		else
		{
			if(j==1)
				printf(" ");
			else printf("*");
		}
	}
	printf("\t");
}
void D(int line)
{
	i=line;
	for(j=1;j<=5;j++)
    {
        if(i==1||i==7)
        {
            if(j==5)
                printf(" ");
            else printf("*");
        }
        else
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
    }
    printf("\t");
}
void E(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==4||i==7)
        {
            printf("*");
        }
        else
            {
                if(j==1)
                    printf("*");
                else printf(" ");
            }
    }
    printf("\t");
}
void F(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==4)
            printf("*");
        else if(j==1)
            printf ("*");
        else printf(" ");
    }
    printf("\t");
}
void G(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==7)
        {
            if(j==1||j==5)
                printf(" ");
            else printf("*");
        }
        else if(i==2||i==6)
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==3||i==4)
        {
            if(j==1)
                printf("*");
            else printf(" ");
        }
        else
        {
            if(j==2)
                printf(" ");
            else printf("*");
        }
    }
    printf("\t");
}

void H(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==4)
        printf("*");
        else
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
    }
    printf("\t");
}

void I(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==7)
            printf("*");
        else if(j==3)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void J(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1)
            printf("*");
        else if(i==2||i==3||i==4)
        {
            if(j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==7)
        {
            if(j==1||j==5)
                printf(" ");
            else printf("*");
        }
        else
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
    }
    printf("\t");
}

void K(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==7)
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }

        else if(i==2||i==6)
        {
            if(j==1||j==4)
                printf("*");
            else printf(" ");
        }

        else if(i==3||i==5)
        {
            if(j==1||j==3)
                printf("*");
            else printf(" ");
        }
        else
        {
            if(j==1||j==2)
                printf("*");
            else printf(" ");
        }
    }
    printf("\t");
}

void L(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==7)
            printf("*");
        else if(j==1)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void M(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1)
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==2)
        {
            if(j==3)
                printf(" ");
            else printf("*");
        }
        else if(i==3||i==4)
        {
            if(j==2||j==4)
                printf(" ");
            else printf("*");
        }
        else
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
    }
    printf("\t");
}

void N(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==7)
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==2)
        {
            if(j==1||j==2||j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==6)
        {
            if(j==2||j==3)
                printf(" ");
            else printf("*");
        }
        else
        {
            if(j==2||j==4)
                printf(" ");
            else printf("*");
        }
    }
    printf("\t");
}

void O(int line)
{
	i=line;
	for(j=1;j<=5;j++)
	{
		if(i==1||i==7)
		{
			if(j==1||j==5)
				printf(" ");
			else printf("*");
		}
		else if(j==1||j==5)
			printf("*");
		else printf(" ");
	}
	printf("\t");
}

void P(int line)
{
	i=line;
	for(j=1;j<=5;j++)
	{
		if(i==1||i==4)
			printf("*");
		else if(i==2||i==3)
		{
			if(j==1||j==5)
				printf("*");
			else printf(" ");
		}
		else if(j==1)
			printf("*");
		else printf(" ");
	}
	printf("\t");
}
void Q(int line)
{

    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==6)
        {
            if(j==1||j==5)
                printf(" ");
            else printf("*");
        }
        else if(i==5)
        {
            if(j==2||j==4)
                printf(" ");
            else printf("*");
        }
        else if(i==7)
        {
            if(j==5)
                printf("*");
            else printf(" ");
        }
        else if(j==1||j==5)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}
void R(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1)
        {
            if(j==1||j==5)
                printf(" ");
            else printf("*");
        }
        else if(i==4)
        {
            if(j==5)
                printf(" ");
            else printf("*");
        }
        else if(i==5)
        {
            if(j==1||j==3)
                printf("*");
            else printf(" ");
        }
        else if(i==6)
        {
            if(j==1||j==4)
                printf("*");
            else printf(" ");
        }
        else if(j==1||j==5)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void S(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==2||i==6)
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==3)
        {
            if(j==1)
                printf("*");
            else printf(" ");
        }
        else if(i==5)
        {
            if(j==5)
                printf("*");
            else printf(" ");
        }
        else if(j==1||j==5)
            printf(" ");
        else printf("*");
    }
    printf("\t");
}

void T(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1)
            printf("*");
        else if(j==3)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void U(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==7)
        {
            if(j==1||j==5)
                printf(" ");
            else printf("*");
        }
        else if(j==1||j==5)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void V(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==7)
        {
            if(j==3)
                printf("*");
            else printf(" ");
        }
        else if(i==4||i==5||i==6)
        {
            if(j==2||j==4)
                printf("*");
            else printf(" ");
        }
        else if(j==1||j==5)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void W(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==7)
        {
            if(j==2||j==4)
                printf("*");
            else printf(" ");
        }
        else if(i==4||i==5||i==6)
        {
            if(j==2||j==4)
                printf(" ");
            else printf("*");
        }
        else if(j==1||j==5)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void X(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==3||i==5)
        {
            if(j==2||j==4)
                printf("*");
            else printf(" ");
        }
        else if(i==4)
        {
            if(j==3)
                printf(" ");
            else printf("*");
        }
        else if(j==1||j==5)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void Y(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==1||i==2||i==3)
        {
            if(j==1||j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==4)
        {
            if(j==2||j==4)
                printf("*");
            else printf(" ");
        }
        else if(j==3)
            printf("*");
        else printf(" ");
    }
    printf("\t");
}

void Z(int line)
{
    i=line;
    for(j=1;j<=5;j++)
    {
        if(i==2)
        {
            if(j==5)
                printf("*");
            else printf(" ");
        }
        else if(i==3)
        {
            if(j==4)
                printf("*");
            else printf(" ");
        }
        else if(i==4)
        {
            if(j==3)
                printf("*");
            else printf(" ");
        }
        else if(i==5)
        {
            if(j==2)
                printf("*");
            else printf(" ");
        }
        else if(i==6)
        {
            if(j==1)
                printf("*");
            else printf(" ");
        }
        else printf("*");
    }
    printf("\t");
}
void main()
{
	int l,c;
	 char name[50];
	    printf("Enter your name: ");
	    gets(name);
	    printf("\n");
	for(l=1;l<=7;l++)
	{
        for(c=0;name[c]!='\0';c++)
        {
            switch((int)name[c])
            {
                case 'a':   A(l);   break;
                case 'b':   B(l);   break;
                case 'c':   C(l);   break;
                case 'd':   D(l);   break;
                case 'e':   E(l);   break;
                case 'f':   F(l);   break;
                case 'g':   G(l);   break;
                case 'h':   H(l);   break;
                case 'i':   I(l);   break;
                case 'j':   J(l);   break;
                case 'k':   K(l);   break;
                case 'l':   L(l);   break;
                case 'm':   M(l);   break;
                case 'n':   N(l);   break;
                case 'o':   O(l);   break;
                case 'p':   P(l);   break;
                case 'q':   Q(l);   break;
                case 'r':   R(l);   break;
                case 's':   S(l);   break;
                case 't':   T(l);   break;
                case 'u':   U(l);   break;
                case 'v':   V(l);   break;
                case 'w':   W(l);   break;
                case 'x':   X(l);   break;
                case 'y':   Y(l);   break;
                xcase 'z':   Z(l);   break;
            }

        }
         printf("\n");
	}
	getch();
}

#include <stdio.h>
#include <ctype.h>
typedef struct conversion
{
	char a[30];
	int top;
}stack;

void push(char, stack *s);

char pop(stack *s);

int isMatchingpair(char left, char right);
	



int main()
{
	char exp[30];
	printf("\nenter expresssion containing parenthisis \n ");	
	scanf("%s",exp);
	checkBalance(exp);
	return 0;
}

int pop(stack *s)
{
    int d,top=s->top;
    if(top!=-1)
    {
		d=s->a[top];
        s->top=s->top-1;
		return d;
    }

}

void push(int e, stack *s)
{
    int top=s->top;
    if(top<29)
	{
		s->a[++(s->top)]=e;
	}
}
int isMatchingpair(char left, char right)
{
	switch(left)
	{
		case '(':
			if(right==')')
				return 1;
                        else 
				return 0;
		case '{': 
			if(right=='}')
				return 1;
			else
				return 0;	
		case '[': 
			if(right==']')
				return 1;
			else
				return 0;
		default :
				return 0;	
	}
	return 0;
}
void CheckBalance(char exp[])
{	 int i;
	stack s;	
	char c;
	s.top=-1;
			
	for(i=0;i<='\0';i++)
	{	if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push(exp[i],&s);
		else 
		{
			if(s.top==-1)
			{ 	printf("Expression is Invalid \n");
				return;
			}
			
			c=pop(&s);

			if(isMatchingpair(c,exp[i]))
			continue;
			else
			{
				printf("INVALID EXPRESSION \n");
				return;
			}
			
		}
	}
}
if(s.top!=-1)
printf("EXPRESSION IS INVALID \n");
else
printf("EXPRESSION IS VALID \n");
}

				
	

	

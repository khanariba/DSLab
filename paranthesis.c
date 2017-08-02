#include<stdio.h>
#include<ctype.h> // for isalpha() function

typedef struct conversion
  {
   char a[30];
   int top;
   }stack;

  void push(int, stack *s);

  int pop(stack *s);

  void check continuity (char exp[]);

  int isMaking pair (char left,char right)

  int main()
   {
	char exp[30];
	printf("\n Enter an expression containing only brackets\n");
	scanf("%s",exp);
	check continuity (char exp[]);
}

int pop(stack *s)
{
    char d;
    int top=s->top;
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

int isMaking pair (char left,char right)

{
	switch(left)
	{
		case '(':  if(right==')')
                  return 1;
                    else
                   return 0;
		break;
		case '[': if(right==']')
                  return 1;
                    else
                   return 0;
		break;
		case '{': if(right==']')
                  return 1;
                    else
                   return 0;
		break;
}

void check continuity (char exp[]);

{
	int i,c;
	stack s;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i] == '(' || exp[i]'{'|| exp[i]'[')
			push(exp[i]);
		else 
		{
		   if(isEmpty(stack s))
                     c <- pop()
                    else
                      invalid;
                }
                 if ( ( exp[i] )
                    continue;
                 else 
                    invalid
	}
	return pop(&s);
}

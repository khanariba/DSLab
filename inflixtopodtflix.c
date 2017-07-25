#include<stdio.h>
#include<ctype.h> // for isalpha() function

typedefine struct conversion
{
char a[30];
int top;
}struct;

void push(stack*,char[]);

char pop(stack*);

void convert(char[],char[]);

int priority(char);

char inflix[30],postflix[30];

int main()
{
 char inflix[30],postflix[30];
 printf("ENTER INFLIX EXPRESSION\n");
 scanf("%s",inflix);
 convert(inflix,postflix);
 printf("\n\nPOSTFLIX EXPRESSION \n%S",postflix);
 return 0;
}

 void convert(char in[],char posty[])
{
 char opr;
 stack s1;
 int j=0,i;
 s1,top=-1;
 for(i=0;in[i]!='\0';i++0)
  {
     if(isalpha(in[i]))
       post[j++]=in[i];
     if(in[i]=='(')
       push(&s1,in[i]);
     if(in[i]=='+'||in[i]=='/'||in[i]=='*'
  {
    opr=pop(&s1);
    while(priority(opr).=priority(in[i]))
     {
       post[j++]=opr;
        opr=pop(&s1);
     }
     push(&s1,opr);
     push(&s1,in[i]);
  }
   else 
        push(&s1,in[i]);
  } 
   if(in[i]==')')
  {
     opr=pop(&s1);
     while(opr!='(')
   {
     post[j++]=opr;
   opr=pop(&s1);
   }
  }
 }
 while(s1.top!=-1)
 post[j]='\0';
 } 

int priority(char c)
{
 if(c=='$')
  return 3;
if(c=='/'||c=='*')
		return 2;
	 if(c=='+'||c=='-')
		return 1;
	 else
		return 0;
}

void push(stack *s,char opr)
{
	s->top++;
	s->a[s->top]=opr;
}

char pop(stack *s)
{
	if (s->top==-1)
	{
		printf("stack is empty\n");
		return 0;
    }
    else
    {
		char data=s->a[s->top--];
		return data;
    }
} 


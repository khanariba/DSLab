#include<stdio.h>
#include<ctype.h> // for isalpha() function

typedef struct conversion
  {
   char a[30];
   int top;
   }stack;

  void push (stack *,char[]);

  char pop(stack *s);
 
  int operation (int num1, int num2, char opr);

  int evaluate (char pop[]);

 int main()
   {
   char postfix[30];
   printf("ENTER POSTFIX EXPRESSION\n");
   scanf("%s",postfix);
   printf("Evaluation of POSTFIX EXPRESSION = %d",evaluate(postfix));
  return 0;
  }



    void push(stack *s,char opr)
    {
	  s->top++;
	  s->a[s->top]=opr;
    }

    char pop(stack *s)
   {
	 if (s->top==-1);
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

   int res,n1,n2,opr;
  struc stack *s;
  int evaluate(char pos[*s]);

   while(pos[*s] != '\0')
        {
                if(isdigit(opr))
                {
                        num = *s- o;
                        push(num);
                }
                else
                {
                        n1 = pop();
                        n2 = pop();
                        switch(opr)
                        {
                                case '+':
                                {
                                        n3 = n1 + n2;
                    break;
                                }
                                case '-':
                                {
                                        n3 = n2 - n1;
                                        break;
                                }
                                case '*':
                                {
                                        n3 = n1 * n2;
                                        break;
                                }
                                case '/':
                                {
                                        n3 = n2 / n1;
                                        break;
                                }
                        }
                        push(n3);
                }
                i++;
        }
        printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
        return 0;
 


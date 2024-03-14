
//WAP to check whether in the given expression all the brackets are balanced or not


#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   printf("Enter the expression : ");
   scanf("\n%[^\n]s",&str);

   int size = strlen(str);
   int top = -1;

   char stack[100];
   
  
   for(int i=0;i<size;i++)
   {
    if(str[i] == '(' ||str[i] == '{' ||str[i] == '[')
    {
        top++;
        stack[top] = str[i];
    }
    
    else if(str[i] == ')' ||str[i] == '}' ||str[i] == ']')
    {
        char ch = stack[top];
        if(ch=='(')
           ch = ')';

        else if(ch=='{')
           ch = '}';
        
        else 
          ch = ']';
        
        if(ch == str[i]){
            top--;
        }
        else 
            break;
    }
   }

   if(top==-1)
         printf("Balanced !!!!");
   else 
         printf("Not Balanced !!!!");

         return 0;
}


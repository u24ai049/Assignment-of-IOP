#include<stdio.h>
int main()
{
   int people,num,p1=0,p2=0,p3=0,p4=0,p5=0,sp=0;
    printf("The number of voters are: ");
    scanf(" %d",&people);
   printf("The candidates are numbered according party\n Party 1\n Party 2\n Party 3\n Party 4\n Party 5\n ");
   for(int i=0;i<people;i++)
 {
      printf("Enter the party number you want to vote for voter %d\n",i+1);
   scanf(" %d",&num);
   
   if(num<6 && num>0)
  {
   switch(num)
     {
       case 1:p1+=1;
       break;
       case 2:p2+=1;
       break;
       case 3:p3+=1;
       break;
       case 4:p4+=1;
       break;
       case 5:p5+=1;
       break;
     }
   }
   else
   {
       sp+=1;
   }
 }
   printf("Party 1 got %d\n",p1);
   printf("Party 2 got %d\n",p2);
   printf("Party 3 got %d\n",p3);
   printf("Party 4 got %d\n",p4);
   printf("Party 5 got %d\n",p5);
   printf("Spoiler ballot are %d",sp);
}

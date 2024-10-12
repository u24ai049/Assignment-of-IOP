#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,e=1,x=1.1,i=1,fact=1;
    do
    {
      a=pow(x,i);
      for(int j=1;j<=i;j++)
      {
          fact=fact*j;
      }
      
      i++;
      b=a/fact;
      e=e+b;
      d= b*100/(e);
      fact=1;
      if(d<0.5)
      {
      printf("The value is %f",e);
      break;
      }
    }while(1);
    
}

// Problem statement : Accept number from user and display all numbers in reverse format.
// Input : 4
// Output :    4   3  2    1

#include<stdio.h>

void DisplayR(int iNo)
{
  
  if( iNo > 0)
  {
     printf("%d",iNo);
	 
	 iNo--;
	 
	 DisplayR(iNo);
  }
}

int main()
{  
  int iNo = 0;
  
  printf("Enter the number \n");
  scanf("%d",&iNo);
  DisplayR(iNo);
  
return 0;
}

/*
output

Enter the number
4
4321

*/
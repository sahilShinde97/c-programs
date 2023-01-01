// Write a C Program to compute the sum of even 
// numbers
// and the sum of odd numbers separately, of n 
// numbers
// given by the user.
#include <stdio.h>

int main()
{
  int even = 0, odd = 0, n;
  int givenNumber;

  //take value of n from user
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    //take the number from the user
    printf("Enter the number: ");
    scanf("%d",&givenNumber);

    //if even
    if(givenNumber%2==0)
    {
      even+=givenNumber;
    }
    // odd
    else {
      odd+=givenNumber;
    }
  }
  //print the result
  printf("\nodd Number sum: %d",odd);
  printf("\neven Number sum: %d",even );
  return 0;
}

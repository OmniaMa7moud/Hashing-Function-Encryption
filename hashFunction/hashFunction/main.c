
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
  int arr[256] ;
  int counter = 0;
//printf("Please Enter the array\n");
//gets(arr);
  for(int i=0; i<256; i++){ arr[i] = i%10;}
  printf("\nArr before hashing\n");
  for(int i=0; i<256; i++){ printf("%d", arr[i]);}
  //printf("%s\n", arr);


  for (int i = 0; i < 16; i++)
{
      for (int j = (i * 16); j < ((i + 1) * 16); j++)
	{
	  arr[i] = arr[j] + arr[j + 16];
	}
}


printf("\n");
printf("Arr after hashing\n");
  for(int i=0; i<256; i++){ printf("%d", arr[i]);}
// printf ("%s\n", arr);




    printf("\nArr before hashing1\n");
  for(int i=0; i<16; i++){ arr[i] = i; }
  for(int i=0; i<256; i++){ printf("%d", arr[i]);}

  for (int i = 0; i < 16; i++)
{
      for (int j = (i * 16); j < ((i + 1) * 16); j++)
	{
	  arr[i] = arr[j] + arr[j + 16];
	}
}


printf("\n");
printf("Arr after hashing1\n");
  for(int i=0; i<256; i++){ printf("%d", arr[i]);}
// printf ("%s\n", arr);

  return 0;
}

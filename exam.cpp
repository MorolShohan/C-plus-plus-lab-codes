#include<iostream>
using namespace std;
int main()
{
   int i, num, count = 0;
   int odd_numbers[10];
   do
   {
      cout("Enter integer : ");
      cin("%d", &num);
      if (abs(num % 2) == 1)
      {
         odd_numbers[count] = num;
         ++count;
      }
   }
   while(count < 10);

   printf("\nIn reverse order the 10 odd numbers are\n");
   for(i = 9; i >= 0; --i) printf("%d\n", odd_numbers[i]);
   return 0;
}


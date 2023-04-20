// approach - 1 
/* In this approach we use num%2 to check whether the number is even or odd, if its even then it'll return 1 and the if statement will evaluate to true and the number
   is reduced by 1 and if it returns 0, then the if statement becomes false and the number is halfed and the count is incremented
*/
int numberOfSteps(int num){
  int count=0;
  while(num>0){
      if(num%2)
      num--;
      else
      num/=2;
      count++;
  }
  return count;
}


// approach -2 : bit manipulation
/* In this approach we use num&1 '&' is a bitwise AND opoerator, it returns the output as either 1 if add or 0 if even and instead of using the '/' arithmetic operator 
   we use right shift since x >> y = x/(2^y)
*/
int numberOfSteps(int num){
  int count=0;
  while(num>0){
      if(num&1)
      num--;
      else
      num>>=1;
      count++;
  }
  return count;
}

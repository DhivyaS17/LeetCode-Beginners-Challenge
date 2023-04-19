/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
*returnSize=n;
char **answer;
answer = malloc(sizeof(*answer) * n);
for(int i=1;i<=n;i++){
    if(i%3==0 && i%5==0)
    answer[i - 1] = strdup("FizzBuzz");
    else if(i%3==0)
    answer[i - 1] = strdup("Fizz");
    else if(i%5==0)
    answer[i - 1] = strdup("Buzz");
    else
    { char s[5];
      sprintf(s,"%d",i);
    answer[i - 1] = strdup(s);
    }
}
return answer;
}

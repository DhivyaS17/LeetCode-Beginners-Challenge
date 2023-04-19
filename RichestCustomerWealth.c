int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
  int i,j,sum,max=0;
  //accountsSize - contains the value for row
  // accountsColSize[1] - contains the value for column
  printf("%d\n",accountsColSize[0]);
  for(i=0;i<accountsSize;i++){
    sum=0;
    for(j=0;j<accountsColSize[0];j++)
    sum+=accounts[i][j];
    if(sum>max)
    max=sum;
  }
  return max;
}

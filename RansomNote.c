bool canConstruct(char * ransomNote, char * magazine){
    int ind=0,len=strlen(ransomNote);
    if(len>strlen(magazine)) return false;
    for(int i=0;i<=strlen(magazine) && ind<len;i++){
        if(ransomNote[ind]==magazine[i]){
            ind++;
            magazine[i]='1';
            i=-1;
        }
        else if(i+1==strlen(magazine))
        {   
            return false;
        }
    }
        
    return true;
}

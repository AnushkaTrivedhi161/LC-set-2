bool isPowerOfFour(int n) {
    int m=1000,i,c;
    if(n<0)
    return false;
    for(i=0;i<m;i++)
    {
       c=pow(4,i);
       if(c==n)
       {
           return true;
       }
    }
    return false;
    
}

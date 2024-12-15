bool isPowerOfTwo(int n) {
    long long int m=1000,i,c;
    for(i=0;i<m;i++)
    {
       c=pow(2,i);
       if(c==n)
       {
           return true;
       }
    }
    return false;

    
}

int power(int m, int n)
{
    int p=1;

    for(int i=0;i<n;i++)
    {
        p=p*m;
    }

    return p ;
}
int main()
{
    int a=0,b=5;
    while(a++)
    {
        if(a%3==0)
            break;
    }
    int result = a + b;
    printf("%d",result);
    return 0;
}

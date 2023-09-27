int fun()
{
    int static num=100;
    return num-=10;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",fun());
    }
    return 0;
}

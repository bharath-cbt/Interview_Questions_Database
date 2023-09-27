int main()
{
    int a=2;
    a++;
    switch(a--)
    {
    case 1:
        printf("Case 1");
        break;
    case 2:
        printf("Case 2");
        break;
    case 3:
        printf("Case 3");
        break;
    default:
        printf("Default");
    }
    return 0;
}

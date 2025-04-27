void Swap(int*x,int*y)
{
    int T;
    Y = *X;
    *X = *Y;
    *Y = T;
}
int main()
{
    int a=100,b=200;
    Swap(&a,&b);
}
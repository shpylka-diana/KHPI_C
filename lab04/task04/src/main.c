#define X 7
int main ()
{
    float y;
    if (X < -1)
    {
        y = -1 / X;
    }
    else if (X >= -1 && X <= 1)
    {
        y = X * X;
    }
    else
    {
        y = 1;
    }
    return 0;
}








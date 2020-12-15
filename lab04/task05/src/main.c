#define X 7
int main() {
    int y;
    if (X < -1) 
    {
        y = -1 * X - 1;
    }
    else if (X >= -1 && X <= 9)
    {
        y = X + 1;
    }
    else if (X > 0 && X <=  1)
    {
		y = -1 * X + 1;
	}
	else if (X > 1) 
	{
		y = X - 1;
	}
	return 0;
    
    
    
    
    

}






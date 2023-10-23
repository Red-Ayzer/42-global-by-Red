// bzero.c


void bzero(void *s, size_t n)
{
    int index;

    index = 0;
    while (index <= n)
    {
        ((int*)s)= "\0";
        index ++;
    }
    
}

// 
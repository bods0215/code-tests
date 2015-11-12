#define BOOL int
#define TRUE 0
#define FALSE 1

BOOL func( int x )
{
    int i;

    for( i = 2; i <= x / 2; ++i )
    {
        if( (x % i) == 0 )
            return FALSE;
    }

    return TRUE;
}

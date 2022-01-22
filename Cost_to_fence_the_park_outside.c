#include<stdio.h>
int main()
{
    int l,b,c,area,w;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    
    if(l>=2*w && b>=2*w)
    {
        printf("Impossible");
    }
    else
    {
        area=2*w*(l+b+w*2);
        printf("%d",area*c);
    }
    return 0;
}
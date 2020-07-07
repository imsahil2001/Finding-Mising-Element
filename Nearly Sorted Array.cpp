#include <stdio.h>
int max_digit(int *,int);
int main() {
    int num,c;
    scanf("%d",&num);
	while(num--)
	{
	    int size,m;
	    scanf("%d %d",&size,&m);
	    int arr[100000]={0};
	    while(m--)
	    {
	        int a,b,k;
	        scanf("%d%d%d",&a,&b,&k);
	        for(int i=a;i<=b;i++)
	        {
	            arr[i]=arr[i]+k;
	        }
	        
	        
	    }
	    c=max_digit(arr,size);
	    printf("%d\n",c);
	}
	return 0;
}
int max_digit(int *a,int n)
{
    int max,j=0;
    max=*(a+j);
    for(int i=0;i<n;i++)
    {
        if(max<*(a+i))
        max=*(a+i);
    }
    return max;
}

#include<stdio.h>


struct pass
{
    int id;
    int date;
};

int main()
{
	int i,j,min,n;
	struct pass t;
	struct pass a[100],b[100];
	printf("Enter number of records: ");
	scanf("%d",&n);
	printf("Enter records: ");
	for(i=0;i<n;i++)
    {
        printf("\nid: ");
        scanf("%d",&a[i].id);
        printf("date: ");
        scanf("%d",&a[i].date);
    }

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

	for (i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(a[j].id > t.id && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;

	}





	for (i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(b[j].date<b[min].date)
			{
				min=j;
			}
		}
		t=b[i];
		b[i]=b[min];
		b[min]=t;
	}

	for (i=0;i<n;i++)
	{
	    printf("\ndate: %d",b[i].date);
	    printf("\nid: %d",b[i].id);

	}


}

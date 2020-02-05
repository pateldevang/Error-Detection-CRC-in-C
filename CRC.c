#include <stdio.h>

int main()
{
	int n,m,i,j;
	printf("Enter the size of Frame:");
	scanf("%d",&n);
	printf("Enter the size of divisor:");
	scanf("%d",&m);
	int frm[n+m-1],grm[m],a[m],chk[n+m-1],t[n];
	printf("Enter the frame:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&frm[i]);
		chk[i]=frm[i];
		t[i]=frm[i];
	}
	for(i=n;i<n+m-1;i++)
	{
		frm[i]=0;
	}
	printf("Enter the Divisor: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&grm[i]);
		a[i]=0;
	}
	if(grm[0]==a[0])
	{
		for(i=0;i<m;i++)
			a[i]=1;
	}
	for(i=0;i<n;i++)
	{
		if(frm[i]==grm[0])
		{
			for(j=0;j<m;j++)
				frm[i+j]=frm[i+j]^grm[j];
		}
		else
		{
			for(j=0;j<m;j++)
				frm[i+j]=frm[i+j]^a[j];
		}
	}
	printf("Remainder is: ");
	for(i=n;i<n+m-1;i++)
	{
		printf("%d",frm[i]);
		chk[i]=frm[i];
	}
	printf("\n");
	printf("Codeword generated is  = ");
	for(i=0;i<n;i++)
	{
		printf("%d",t[i]);
	}
	for(i=n;i<n+m-1;i++)
	{
		printf("%d",frm[i]);
		chk[i]=frm[i];}
		for(i=0;i<n;i++)
	{
		if(chk[i]==grm[0])
		{
			for(j=0;j<m;j++)
				chk[i+j]=chk[i+j]^grm[j];
		}
		else
		{
			for(j=0;j<m;j++)
				chk[i+j]=chk[i+j]^a[j];
		}
	}
	printf("\n");
	printf("Remainder after check is is:");
	for(i=n;i<n+m-1;i++)
		printf("%d",chk[i]);

	printf("\n");
	
	return 0;
}

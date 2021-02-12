#include <stdio.h>
#define max 100


int main(int argc, char const *argv[])
{
	int p[max], n, i;
	printf("Enter the length of the array: ");
	scanf("%d", &n);

	puts("Enter the values of to be inserted in the array");
	for (i = 0; i < n; ++i){
		scanf("%d", &p[i]);
	}

	int k;
	printf("Enter the position where to insert: ");
	scanf("%d", &k);
	k--;

	for (int j = n-1; j>=k; j--)
	{
		p[j+1] = p[j];
	}

	printf("Enter the value to insert: ");
	scanf("%d", &p[k]);

	printf("\nArray after insertion of element: \n");
	for(i=0;i<=n;i++)
	printf("%d\n",p[i]);

}
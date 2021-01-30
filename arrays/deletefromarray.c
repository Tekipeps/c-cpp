#include <stdio.h>
#define max 100

int main( void ){
	int arr[max], n, index;

	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	printf("Enter the values in the array: \n");
	for (int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}

	printf("\nThe items in the array are: \n");
	for (int i = 0; i < n; ++i){
		printf("%d\n", arr[i]);
	}

	int pos;
	printf("Enter the position to delete: ");
	scanf("%d", &pos);
	pos--;

	for (int i = pos; i < n; ++i){
		arr[i] = arr[i+1];
	}
	arr[n-1] = 0;


	printf("The items in the array are: \n");
	for (int i = 0; i < n-1; ++i){
		printf("%d\n", arr[i]);
	}

	return 0;
}